// Ogonek
//
// Written in 2012 by Martinho Fernandes <martinho.fernandes@gmail.com>
//
// To the extent possible under law, the author(s) have dedicated all copyright and related
// and neighboring rights to this software to the public domain worldwide. This software is
// distributed without any warranty.
//
// You should have received a copy of the CC0 Public Domain Dedication along with this software.
// If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.

// Generic encoding scheme

#ifndef OGONEK_ENCODING_ENCODING_SCHEME_HPP
#define OGONEK_ENCODING_ENCODING_SCHEME_HPP

#include "../byte_order.h++"
#include "../types.h++"

#include <boost/range/sub_range.hpp>
#include <boost/range/begin.hpp>
#include <boost/range/end.hpp>
#include <boost/range/empty.hpp>

#include <cstdint>
#include <type_traits>

namespace ogonek {
    namespace encoding_scheme_detail {
        template <typename T, std::size_t N = sizeof(T)>
        struct uint;
        template <typename T>
        struct uint<T, 1> { using type = std::uint8_t; };
        template <typename T>
        struct uint<T, 2> { using type = std::uint16_t; };
        template <typename T>
        struct uint<T, 4> { using type = std::uint32_t; };
        template <typename T>
        struct uint<T, 8> { using type = std::uint64_t; };
        template <typename T>
        using Uint = typename uint<T>::type;
    } // namespace encoding_scheme_detail
    template <typename EncodingForm, typename ByteOrder>
    struct encoding_scheme {
        static constexpr bool is_fixed_width = EncodingForm::is_fixed_width;
        static constexpr std::size_t max_width = EncodingForm::max_width * sizeof(EncodingForm::code_unit);
        using state = typename EncodingForm::state;

        template <typename SinglePassRange, typename OutputIterator>
        static OutputIterator encode(SinglePassRange const& r, OutputIterator out) {
            state s {};
            for(auto u : r) {
                out = encode_one(u, out, s);
            }
            return out;
        }
        template <typename SinglePassRange, typename OutputIterator>
        static OutputIterator decode(SinglePassRange const& r, OutputIterator out) {
            state s {};
            for(boost::sub_range<SinglePassRange> slice { r }; !boost::empty(slice); ) {
                codepoint c;
                slice = decode_one(slice, c, s);
                *out++ = c;
            }
            return out;
        }

        template <typename OutputIterator>
        static OutputIterator encode_one(codepoint u, OutputIterator out) {
            state s {};
            return encode_one(u, out, s);
        }
        template <typename OutputIterator>
        static OutputIterator encode_one(codepoint u, OutputIterator out, state& s) {
            std::array<typename EncodingForm::code_unit, EncodingForm::max_width> units;
            auto end = EncodingForm::encode_one(u, units.begin(), s);
            for(auto it = units.begin(); it != end; ++it) {
                auto bytes = ByteOrder::map(static_cast<encoding_scheme_detail::Uint<typename EncodingForm::code_unit>>(*it));
                out = std::copy(bytes.begin(), bytes.end(), out);
            }
            return out;
        }

        template <typename SinglePassRange>
        static boost::sub_range<SinglePassRange> decode_one(SinglePassRange const& r, codepoint& out) {
            state s {};
            return decode_one(r, out, s);
        }
        template <typename SinglePassRange>
        static boost::sub_range<SinglePassRange> decode_one(SinglePassRange const& r, codepoint& out, state& s) {
            //auto first = boost::begin(r);
            //ByteOrder::unmap<sizeof(typename EncodingForm::code_unit)>(first); // TODO review unmap to work with input iterators!
            // TODO fsck, need an actual range: how many code units to read?
            // or maybe the EncodingForm needs expanding?

            // TODO
            out = 0;
            s = s;
            return { r }; //{ first, boost::end(r) };
        }
    };
    class utf16;
    class utf32;
    using utf16be = encoding_scheme<utf16, big_endian>;
    using utf16le = encoding_scheme<utf16, little_endian>;
    using utf32be = encoding_scheme<utf32, big_endian>;
    using utf32le = encoding_scheme<utf32, little_endian>;
} // namespace ogonek

#endif // OGONEK_ENCODING_ENCODING_SCHEME_HPP

