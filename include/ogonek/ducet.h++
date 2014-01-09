// Ogonek
//
// Written in 2012-2013 by Martinho Fernandes <martinho.fernandes@gmail.com>
//
// To the extent possible under law, the author(s) have dedicated all copyright and related
// and neighboring rights to this software to the public domain worldwide. This software is
// distributed without any warranty.
//
// You should have received a copy of the CC0 Public Domain Dedication along with this software.
// If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.

// Unicode character database data structures

#ifndef OGONEK_DUCET_HPP
#define OGONEK_DUCET_HPP

#include <ogonek/types.h++>
#include <ogonek/text.h++>

#include <initializer_list>

namespace ogonek {
    namespace ducet {
    	struct ducet_element_weights {
		    bool is_variable_weight;
		    std::initializer_list<int> weights;
		};
		 
		struct ducet_element {
		    std::initializer_list<code_point> char_ids;
		    std::initializer_list<ducet_element_weights> element_weights;
		};
    } //namespace ducet
} // namespace ogonek

#endif // OGONEK_DUCET_HPP