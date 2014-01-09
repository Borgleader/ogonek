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

// Unicode character database - raw data

#include <ogonek/ducet.h++>

namespace ogonek {
    namespace ducet {
        namespace {
        	ducet_element const ducet_data_raw[] {
                #include "ducet/ducet.g.inl"
            };
        
        template <typename T, std::size_t N>
        constexpr std::size_t size(T(&)[N]) { return N; }
    	} // namespace
    	ducet_element const* ducet_data = ducet_data_raw;
        std::size_t ducet_data_size = size(ducet_data_raw);
    } // namespace ducet
} // namespace ogonek