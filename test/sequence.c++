// Ogonek
//
// Written in 2013 by Martinho Fernandes <martinho.fernandes@gmail.com>
//
// To the extent possible under law, the author(s) have dedicated all copyright and related
// and neighboring rights to this software to the public domain worldwide. This software is
// distributed without any warranty.
//
// You should have received a copy of the CC0 Public Domain Dedication along with this software.
// If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.

// Tests for <ogonek/sequence.h++>

#include <ogonek/sequence.h++>
#include <ogonek/error/assume_valid.h++>

#include <catch.h++>

TEST_CASE("sequence", "sequence tests") {
    namespace seq = ogonek::seq;
    auto&& str = ogonek::forward_sequence(u"\U00010000ab");
    REQUIRE(!seq::empty(str));
    REQUIRE(seq::front(str) == u'\xD800');
    seq::pop_front(str);
    REQUIRE(!seq::empty(str));
    REQUIRE(seq::front(str) == u'\xDC00');
    seq::pop_front(str);
    REQUIRE(!seq::empty(str));
    REQUIRE(seq::front(str) == u'a');
    seq::pop_front(str);
    REQUIRE(!seq::empty(str));
    REQUIRE(seq::front(str) == u'b');
    seq::pop_front(str);
    REQUIRE(seq::empty(str));
}
TEST_CASE("sequence_iterator", "sequence iterator tests") {
    namespace seq = ogonek::seq;
    auto&& str = ogonek::forward_sequence(u"\U00010000ab");
    char16_t res[] = u"\xD800\xDC00" u"ab";
    int i = 0;
    for(auto it = seq::begin(str); it != seq::end(str); ++it) {
        REQUIRE(*it == res[i]);
        ++i;
    }
}

#include <ogonek/encoding/sequence.h++>
#include <ogonek/encoding/utf8.h++>
TEST_CASE("encode", "Encoding sequence") {
    namespace seq = ogonek::seq;
    auto str = ogonek::forward_sequence(U"\U00010000ab");

    auto e = ogonek::encode_ex<ogonek::utf16>(str, ogonek::assume_valid);
    char16_t res[] = u"\U00010000ab";
    for(int i = 0; !seq::empty(e); seq::pop_front(e), ++i) {
        auto&& x = seq::front(e);
        REQUIRE(x == res[i]);
    }

    auto f = ogonek::encode_ex<ogonek::utf8>(str, ogonek::assume_valid);
    char res2[] = u8"\U00010000ab";
    for(int i = 0; !seq::empty(f); seq::pop_front(f), ++i) {
        auto&& x = seq::front(f);
        REQUIRE(x == res2[i]);
    }
}

TEST_CASE("unicodestring", "Unicode string tests") {/*
    namespace seq = ogonek::seq;
    auto&& str = ogonek::forward_sequence(u"\xD800\xDC00" u"ab");
    auto&& ustr = ogonek::forward_code_points(str, ogonek::assume_valid);
    REQUIRE(!seq::empty(ustr));
    REQUIRE(seq::front(ustr) == U'\x10000');
    seq::pop_front(ustr);
    REQUIRE(!seq::empty(ustr));
    REQUIRE(seq::front(ustr) == U'a');
    seq::pop_front(ustr);
    REQUIRE(!seq::empty(ustr));
    REQUIRE(seq::front(ustr) == U'b');
    seq::pop_front(ustr);
    REQUIRE(seq::empty(ustr));
*/}

