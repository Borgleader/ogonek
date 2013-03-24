// Ogonek
//
// Written in 2013 by Martinho Fernandes <martinho.fernandes@gmail.com>
//
// To the extent possible under law, the author(s) have dedicated all copyright and related
//
// and neighboring rights to this software to the public domain worldwide. This software is
// distributed without any warranty.
//
// You should have received a copy of the CC0 Public Domain Dedication along with this software.
// If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.

// An encoded character

#ifndef OGONEK_DETAIL_ENCODED_CHARACTER_HPP
#define OGONEK_DETAIL_ENCODED_CHARACTER_HPP

#include <ogonek/detail/partial_array.h++>

namespace ogonek {
    namespace detail {
        template <typename Encoding>
        using encoded_character = partial_array<typename Encoding::code_unit, Encoding::max_width>;
    } // namespace detail
} // namespace ogonek

#endif // OGONEK_DETAIL_ENCODED_CHARACTER_HPP

