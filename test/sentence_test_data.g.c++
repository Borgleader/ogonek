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

// This file was automatically generated on 2013-11-08T13:46:42.2548860Z

// Test data for sentences tests

#include "segmentation.g.h++"

namespace test {
    break_test sentence_test_data[] = {
        { U"\x0001\x0001", { 2 } },
        { U"\x0001\x0308\x0001", { 3 } },
        { U"\x0001\x000D", { 2 } },
        { U"\x0001\x0308\x000D", { 3 } },
        { U"\x0001\x000A", { 2 } },
        { U"\x0001\x0308\x000A", { 3 } },
        { U"\x0001\x0085", { 2 } },
        { U"\x0001\x0308\x0085", { 3 } },
        { U"\x0001\x0009", { 2 } },
        { U"\x0001\x0308\x0009", { 3 } },
        { U"\x0001\x0061", { 2 } },
        { U"\x0001\x0308\x0061", { 3 } },
        { U"\x0001\x0041", { 2 } },
        { U"\x0001\x0308\x0041", { 3 } },
        { U"\x0001\x01BB", { 2 } },
        { U"\x0001\x0308\x01BB", { 3 } },
        { U"\x0001\x0030", { 2 } },
        { U"\x0001\x0308\x0030", { 3 } },
        { U"\x0001\x002E", { 2 } },
        { U"\x0001\x0308\x002E", { 3 } },
        { U"\x0001\x0021", { 2 } },
        { U"\x0001\x0308\x0021", { 3 } },
        { U"\x0001\x0022", { 2 } },
        { U"\x0001\x0308\x0022", { 3 } },
        { U"\x0001\x002C", { 2 } },
        { U"\x0001\x0308\x002C", { 3 } },
        { U"\x0001\x00AD", { 2 } },
        { U"\x0001\x0308\x00AD", { 3 } },
        { U"\x0001\x0300", { 2 } },
        { U"\x0001\x0308\x0300", { 3 } },
        { U"\x000D\x0001", { 1, 2 } },
        { U"\x000D\x0308\x0001", { 1, 3 } },
        { U"\x000D\x000D", { 1, 2 } },
        { U"\x000D\x0308\x000D", { 1, 3 } },
        { U"\x000D\x000A", { 2 } },
        { U"\x000D\x0308\x000A", { 1, 3 } },
        { U"\x000D\x0085", { 1, 2 } },
        { U"\x000D\x0308\x0085", { 1, 3 } },
        { U"\x000D\x0009", { 1, 2 } },
        { U"\x000D\x0308\x0009", { 1, 3 } },
        { U"\x000D\x0061", { 1, 2 } },
        { U"\x000D\x0308\x0061", { 1, 3 } },
        { U"\x000D\x0041", { 1, 2 } },
        { U"\x000D\x0308\x0041", { 1, 3 } },
        { U"\x000D\x01BB", { 1, 2 } },
        { U"\x000D\x0308\x01BB", { 1, 3 } },
        { U"\x000D\x0030", { 1, 2 } },
        { U"\x000D\x0308\x0030", { 1, 3 } },
        { U"\x000D\x002E", { 1, 2 } },
        { U"\x000D\x0308\x002E", { 1, 3 } },
        { U"\x000D\x0021", { 1, 2 } },
        { U"\x000D\x0308\x0021", { 1, 3 } },
        { U"\x000D\x0022", { 1, 2 } },
        { U"\x000D\x0308\x0022", { 1, 3 } },
        { U"\x000D\x002C", { 1, 2 } },
        { U"\x000D\x0308\x002C", { 1, 3 } },
        { U"\x000D\x00AD", { 1, 2 } },
        { U"\x000D\x0308\x00AD", { 1, 3 } },
        { U"\x000D\x0300", { 1, 2 } },
        { U"\x000D\x0308\x0300", { 1, 3 } },
        { U"\x000A\x0001", { 1, 2 } },
        { U"\x000A\x0308\x0001", { 1, 3 } },
        { U"\x000A\x000D", { 1, 2 } },
        { U"\x000A\x0308\x000D", { 1, 3 } },
        { U"\x000A\x000A", { 1, 2 } },
        { U"\x000A\x0308\x000A", { 1, 3 } },
        { U"\x000A\x0085", { 1, 2 } },
        { U"\x000A\x0308\x0085", { 1, 3 } },
        { U"\x000A\x0009", { 1, 2 } },
        { U"\x000A\x0308\x0009", { 1, 3 } },
        { U"\x000A\x0061", { 1, 2 } },
        { U"\x000A\x0308\x0061", { 1, 3 } },
        { U"\x000A\x0041", { 1, 2 } },
        { U"\x000A\x0308\x0041", { 1, 3 } },
        { U"\x000A\x01BB", { 1, 2 } },
        { U"\x000A\x0308\x01BB", { 1, 3 } },
        { U"\x000A\x0030", { 1, 2 } },
        { U"\x000A\x0308\x0030", { 1, 3 } },
        { U"\x000A\x002E", { 1, 2 } },
        { U"\x000A\x0308\x002E", { 1, 3 } },
        { U"\x000A\x0021", { 1, 2 } },
        { U"\x000A\x0308\x0021", { 1, 3 } },
        { U"\x000A\x0022", { 1, 2 } },
        { U"\x000A\x0308\x0022", { 1, 3 } },
        { U"\x000A\x002C", { 1, 2 } },
        { U"\x000A\x0308\x002C", { 1, 3 } },
        { U"\x000A\x00AD", { 1, 2 } },
        { U"\x000A\x0308\x00AD", { 1, 3 } },
        { U"\x000A\x0300", { 1, 2 } },
        { U"\x000A\x0308\x0300", { 1, 3 } },
        { U"\x0085\x0001", { 1, 2 } },
        { U"\x0085\x0308\x0001", { 1, 3 } },
        { U"\x0085\x000D", { 1, 2 } },
        { U"\x0085\x0308\x000D", { 1, 3 } },
        { U"\x0085\x000A", { 1, 2 } },
        { U"\x0085\x0308\x000A", { 1, 3 } },
        { U"\x0085\x0085", { 1, 2 } },
        { U"\x0085\x0308\x0085", { 1, 3 } },
        { U"\x0085\x0009", { 1, 2 } },
        { U"\x0085\x0308\x0009", { 1, 3 } },
        { U"\x0085\x0061", { 1, 2 } },
        { U"\x0085\x0308\x0061", { 1, 3 } },
        { U"\x0085\x0041", { 1, 2 } },
        { U"\x0085\x0308\x0041", { 1, 3 } },
        { U"\x0085\x01BB", { 1, 2 } },
        { U"\x0085\x0308\x01BB", { 1, 3 } },
        { U"\x0085\x0030", { 1, 2 } },
        { U"\x0085\x0308\x0030", { 1, 3 } },
        { U"\x0085\x002E", { 1, 2 } },
        { U"\x0085\x0308\x002E", { 1, 3 } },
        { U"\x0085\x0021", { 1, 2 } },
        { U"\x0085\x0308\x0021", { 1, 3 } },
        { U"\x0085\x0022", { 1, 2 } },
        { U"\x0085\x0308\x0022", { 1, 3 } },
        { U"\x0085\x002C", { 1, 2 } },
        { U"\x0085\x0308\x002C", { 1, 3 } },
        { U"\x0085\x00AD", { 1, 2 } },
        { U"\x0085\x0308\x00AD", { 1, 3 } },
        { U"\x0085\x0300", { 1, 2 } },
        { U"\x0085\x0308\x0300", { 1, 3 } },
        { U"\x0009\x0001", { 2 } },
        { U"\x0009\x0308\x0001", { 3 } },
        { U"\x0009\x000D", { 2 } },
        { U"\x0009\x0308\x000D", { 3 } },
        { U"\x0009\x000A", { 2 } },
        { U"\x0009\x0308\x000A", { 3 } },
        { U"\x0009\x0085", { 2 } },
        { U"\x0009\x0308\x0085", { 3 } },
        { U"\x0009\x0009", { 2 } },
        { U"\x0009\x0308\x0009", { 3 } },
        { U"\x0009\x0061", { 2 } },
        { U"\x0009\x0308\x0061", { 3 } },
        { U"\x0009\x0041", { 2 } },
        { U"\x0009\x0308\x0041", { 3 } },
        { U"\x0009\x01BB", { 2 } },
        { U"\x0009\x0308\x01BB", { 3 } },
        { U"\x0009\x0030", { 2 } },
        { U"\x0009\x0308\x0030", { 3 } },
        { U"\x0009\x002E", { 2 } },
        { U"\x0009\x0308\x002E", { 3 } },
        { U"\x0009\x0021", { 2 } },
        { U"\x0009\x0308\x0021", { 3 } },
        { U"\x0009\x0022", { 2 } },
        { U"\x0009\x0308\x0022", { 3 } },
        { U"\x0009\x002C", { 2 } },
        { U"\x0009\x0308\x002C", { 3 } },
        { U"\x0009\x00AD", { 2 } },
        { U"\x0009\x0308\x00AD", { 3 } },
        { U"\x0009\x0300", { 2 } },
        { U"\x0009\x0308\x0300", { 3 } },
        { U"\x0061\x0001", { 2 } },
        { U"\x0061\x0308\x0001", { 3 } },
        { U"\x0061\x000D", { 2 } },
        { U"\x0061\x0308\x000D", { 3 } },
        { U"\x0061\x000A", { 2 } },
        { U"\x0061\x0308\x000A", { 3 } },
        { U"\x0061\x0085", { 2 } },
        { U"\x0061\x0308\x0085", { 3 } },
        { U"\x0061\x0009", { 2 } },
        { U"\x0061\x0308\x0009", { 3 } },
        { U"\x0061\x0061", { 2 } },
        { U"\x0061\x0308\x0061", { 3 } },
        { U"\x0061\x0041", { 2 } },
        { U"\x0061\x0308\x0041", { 3 } },
        { U"\x0061\x01BB", { 2 } },
        { U"\x0061\x0308\x01BB", { 3 } },
        { U"\x0061\x0030", { 2 } },
        { U"\x0061\x0308\x0030", { 3 } },
        { U"\x0061\x002E", { 2 } },
        { U"\x0061\x0308\x002E", { 3 } },
        { U"\x0061\x0021", { 2 } },
        { U"\x0061\x0308\x0021", { 3 } },
        { U"\x0061\x0022", { 2 } },
        { U"\x0061\x0308\x0022", { 3 } },
        { U"\x0061\x002C", { 2 } },
        { U"\x0061\x0308\x002C", { 3 } },
        { U"\x0061\x00AD", { 2 } },
        { U"\x0061\x0308\x00AD", { 3 } },
        { U"\x0061\x0300", { 2 } },
        { U"\x0061\x0308\x0300", { 3 } },
        { U"\x0041\x0001", { 2 } },
        { U"\x0041\x0308\x0001", { 3 } },
        { U"\x0041\x000D", { 2 } },
        { U"\x0041\x0308\x000D", { 3 } },
        { U"\x0041\x000A", { 2 } },
        { U"\x0041\x0308\x000A", { 3 } },
        { U"\x0041\x0085", { 2 } },
        { U"\x0041\x0308\x0085", { 3 } },
        { U"\x0041\x0009", { 2 } },
        { U"\x0041\x0308\x0009", { 3 } },
        { U"\x0041\x0061", { 2 } },
        { U"\x0041\x0308\x0061", { 3 } },
        { U"\x0041\x0041", { 2 } },
        { U"\x0041\x0308\x0041", { 3 } },
        { U"\x0041\x01BB", { 2 } },
        { U"\x0041\x0308\x01BB", { 3 } },
        { U"\x0041\x0030", { 2 } },
        { U"\x0041\x0308\x0030", { 3 } },
        { U"\x0041\x002E", { 2 } },
        { U"\x0041\x0308\x002E", { 3 } },
        { U"\x0041\x0021", { 2 } },
        { U"\x0041\x0308\x0021", { 3 } },
        { U"\x0041\x0022", { 2 } },
        { U"\x0041\x0308\x0022", { 3 } },
        { U"\x0041\x002C", { 2 } },
        { U"\x0041\x0308\x002C", { 3 } },
        { U"\x0041\x00AD", { 2 } },
        { U"\x0041\x0308\x00AD", { 3 } },
        { U"\x0041\x0300", { 2 } },
        { U"\x0041\x0308\x0300", { 3 } },
        { U"\x01BB\x0001", { 2 } },
        { U"\x01BB\x0308\x0001", { 3 } },
        { U"\x01BB\x000D", { 2 } },
        { U"\x01BB\x0308\x000D", { 3 } },
        { U"\x01BB\x000A", { 2 } },
        { U"\x01BB\x0308\x000A", { 3 } },
        { U"\x01BB\x0085", { 2 } },
        { U"\x01BB\x0308\x0085", { 3 } },
        { U"\x01BB\x0009", { 2 } },
        { U"\x01BB\x0308\x0009", { 3 } },
        { U"\x01BB\x0061", { 2 } },
        { U"\x01BB\x0308\x0061", { 3 } },
        { U"\x01BB\x0041", { 2 } },
        { U"\x01BB\x0308\x0041", { 3 } },
        { U"\x01BB\x01BB", { 2 } },
        { U"\x01BB\x0308\x01BB", { 3 } },
        { U"\x01BB\x0030", { 2 } },
        { U"\x01BB\x0308\x0030", { 3 } },
        { U"\x01BB\x002E", { 2 } },
        { U"\x01BB\x0308\x002E", { 3 } },
        { U"\x01BB\x0021", { 2 } },
        { U"\x01BB\x0308\x0021", { 3 } },
        { U"\x01BB\x0022", { 2 } },
        { U"\x01BB\x0308\x0022", { 3 } },
        { U"\x01BB\x002C", { 2 } },
        { U"\x01BB\x0308\x002C", { 3 } },
        { U"\x01BB\x00AD", { 2 } },
        { U"\x01BB\x0308\x00AD", { 3 } },
        { U"\x01BB\x0300", { 2 } },
        { U"\x01BB\x0308\x0300", { 3 } },
        { U"\x0030\x0001", { 2 } },
        { U"\x0030\x0308\x0001", { 3 } },
        { U"\x0030\x000D", { 2 } },
        { U"\x0030\x0308\x000D", { 3 } },
        { U"\x0030\x000A", { 2 } },
        { U"\x0030\x0308\x000A", { 3 } },
        { U"\x0030\x0085", { 2 } },
        { U"\x0030\x0308\x0085", { 3 } },
        { U"\x0030\x0009", { 2 } },
        { U"\x0030\x0308\x0009", { 3 } },
        { U"\x0030\x0061", { 2 } },
        { U"\x0030\x0308\x0061", { 3 } },
        { U"\x0030\x0041", { 2 } },
        { U"\x0030\x0308\x0041", { 3 } },
        { U"\x0030\x01BB", { 2 } },
        { U"\x0030\x0308\x01BB", { 3 } },
        { U"\x0030\x0030", { 2 } },
        { U"\x0030\x0308\x0030", { 3 } },
        { U"\x0030\x002E", { 2 } },
        { U"\x0030\x0308\x002E", { 3 } },
        { U"\x0030\x0021", { 2 } },
        { U"\x0030\x0308\x0021", { 3 } },
        { U"\x0030\x0022", { 2 } },
        { U"\x0030\x0308\x0022", { 3 } },
        { U"\x0030\x002C", { 2 } },
        { U"\x0030\x0308\x002C", { 3 } },
        { U"\x0030\x00AD", { 2 } },
        { U"\x0030\x0308\x00AD", { 3 } },
        { U"\x0030\x0300", { 2 } },
        { U"\x0030\x0308\x0300", { 3 } },
        { U"\x002E\x0001", { 1, 2 } },
        { U"\x002E\x0308\x0001", { 2, 3 } },
        { U"\x002E\x000D", { 2 } },
        { U"\x002E\x0308\x000D", { 3 } },
        { U"\x002E\x000A", { 2 } },
        { U"\x002E\x0308\x000A", { 3 } },
        { U"\x002E\x0085", { 2 } },
        { U"\x002E\x0308\x0085", { 3 } },
        { U"\x002E\x0009", { 2 } },
        { U"\x002E\x0308\x0009", { 3 } },
        { U"\x002E\x0061", { 2 } },
        { U"\x002E\x0308\x0061", { 3 } },
        { U"\x002E\x0041", { 1, 2 } },
        { U"\x002E\x0308\x0041", { 2, 3 } },
        { U"\x002E\x01BB", { 1, 2 } },
        { U"\x002E\x0308\x01BB", { 2, 3 } },
        { U"\x002E\x0030", { 2 } },
        { U"\x002E\x0308\x0030", { 3 } },
        { U"\x002E\x002E", { 2 } },
        { U"\x002E\x0308\x002E", { 3 } },
        { U"\x002E\x0021", { 2 } },
        { U"\x002E\x0308\x0021", { 3 } },
        { U"\x002E\x0022", { 2 } },
        { U"\x002E\x0308\x0022", { 3 } },
        { U"\x002E\x002C", { 2 } },
        { U"\x002E\x0308\x002C", { 3 } },
        { U"\x002E\x00AD", { 2 } },
        { U"\x002E\x0308\x00AD", { 3 } },
        { U"\x002E\x0300", { 2 } },
        { U"\x002E\x0308\x0300", { 3 } },
        { U"\x0021\x0001", { 1, 2 } },
        { U"\x0021\x0308\x0001", { 2, 3 } },
        { U"\x0021\x000D", { 2 } },
        { U"\x0021\x0308\x000D", { 3 } },
        { U"\x0021\x000A", { 2 } },
        { U"\x0021\x0308\x000A", { 3 } },
        { U"\x0021\x0085", { 2 } },
        { U"\x0021\x0308\x0085", { 3 } },
        { U"\x0021\x0009", { 2 } },
        { U"\x0021\x0308\x0009", { 3 } },
        { U"\x0021\x0061", { 1, 2 } },
        { U"\x0021\x0308\x0061", { 2, 3 } },
        { U"\x0021\x0041", { 1, 2 } },
        { U"\x0021\x0308\x0041", { 2, 3 } },
        { U"\x0021\x01BB", { 1, 2 } },
        { U"\x0021\x0308\x01BB", { 2, 3 } },
        { U"\x0021\x0030", { 1, 2 } },
        { U"\x0021\x0308\x0030", { 2, 3 } },
        { U"\x0021\x002E", { 2 } },
        { U"\x0021\x0308\x002E", { 3 } },
        { U"\x0021\x0021", { 2 } },
        { U"\x0021\x0308\x0021", { 3 } },
        { U"\x0021\x0022", { 2 } },
        { U"\x0021\x0308\x0022", { 3 } },
        { U"\x0021\x002C", { 2 } },
        { U"\x0021\x0308\x002C", { 3 } },
        { U"\x0021\x00AD", { 2 } },
        { U"\x0021\x0308\x00AD", { 3 } },
        { U"\x0021\x0300", { 2 } },
        { U"\x0021\x0308\x0300", { 3 } },
        { U"\x0022\x0001", { 2 } },
        { U"\x0022\x0308\x0001", { 3 } },
        { U"\x0022\x000D", { 2 } },
        { U"\x0022\x0308\x000D", { 3 } },
        { U"\x0022\x000A", { 2 } },
        { U"\x0022\x0308\x000A", { 3 } },
        { U"\x0022\x0085", { 2 } },
        { U"\x0022\x0308\x0085", { 3 } },
        { U"\x0022\x0009", { 2 } },
        { U"\x0022\x0308\x0009", { 3 } },
        { U"\x0022\x0061", { 2 } },
        { U"\x0022\x0308\x0061", { 3 } },
        { U"\x0022\x0041", { 2 } },
        { U"\x0022\x0308\x0041", { 3 } },
        { U"\x0022\x01BB", { 2 } },
        { U"\x0022\x0308\x01BB", { 3 } },
        { U"\x0022\x0030", { 2 } },
        { U"\x0022\x0308\x0030", { 3 } },
        { U"\x0022\x002E", { 2 } },
        { U"\x0022\x0308\x002E", { 3 } },
        { U"\x0022\x0021", { 2 } },
        { U"\x0022\x0308\x0021", { 3 } },
        { U"\x0022\x0022", { 2 } },
        { U"\x0022\x0308\x0022", { 3 } },
        { U"\x0022\x002C", { 2 } },
        { U"\x0022\x0308\x002C", { 3 } },
        { U"\x0022\x00AD", { 2 } },
        { U"\x0022\x0308\x00AD", { 3 } },
        { U"\x0022\x0300", { 2 } },
        { U"\x0022\x0308\x0300", { 3 } },
        { U"\x002C\x0001", { 2 } },
        { U"\x002C\x0308\x0001", { 3 } },
        { U"\x002C\x000D", { 2 } },
        { U"\x002C\x0308\x000D", { 3 } },
        { U"\x002C\x000A", { 2 } },
        { U"\x002C\x0308\x000A", { 3 } },
        { U"\x002C\x0085", { 2 } },
        { U"\x002C\x0308\x0085", { 3 } },
        { U"\x002C\x0009", { 2 } },
        { U"\x002C\x0308\x0009", { 3 } },
        { U"\x002C\x0061", { 2 } },
        { U"\x002C\x0308\x0061", { 3 } },
        { U"\x002C\x0041", { 2 } },
        { U"\x002C\x0308\x0041", { 3 } },
        { U"\x002C\x01BB", { 2 } },
        { U"\x002C\x0308\x01BB", { 3 } },
        { U"\x002C\x0030", { 2 } },
        { U"\x002C\x0308\x0030", { 3 } },
        { U"\x002C\x002E", { 2 } },
        { U"\x002C\x0308\x002E", { 3 } },
        { U"\x002C\x0021", { 2 } },
        { U"\x002C\x0308\x0021", { 3 } },
        { U"\x002C\x0022", { 2 } },
        { U"\x002C\x0308\x0022", { 3 } },
        { U"\x002C\x002C", { 2 } },
        { U"\x002C\x0308\x002C", { 3 } },
        { U"\x002C\x00AD", { 2 } },
        { U"\x002C\x0308\x00AD", { 3 } },
        { U"\x002C\x0300", { 2 } },
        { U"\x002C\x0308\x0300", { 3 } },
        { U"\x00AD\x0001", { 2 } },
        { U"\x00AD\x0308\x0001", { 3 } },
        { U"\x00AD\x000D", { 2 } },
        { U"\x00AD\x0308\x000D", { 3 } },
        { U"\x00AD\x000A", { 2 } },
        { U"\x00AD\x0308\x000A", { 3 } },
        { U"\x00AD\x0085", { 2 } },
        { U"\x00AD\x0308\x0085", { 3 } },
        { U"\x00AD\x0009", { 2 } },
        { U"\x00AD\x0308\x0009", { 3 } },
        { U"\x00AD\x0061", { 2 } },
        { U"\x00AD\x0308\x0061", { 3 } },
        { U"\x00AD\x0041", { 2 } },
        { U"\x00AD\x0308\x0041", { 3 } },
        { U"\x00AD\x01BB", { 2 } },
        { U"\x00AD\x0308\x01BB", { 3 } },
        { U"\x00AD\x0030", { 2 } },
        { U"\x00AD\x0308\x0030", { 3 } },
        { U"\x00AD\x002E", { 2 } },
        { U"\x00AD\x0308\x002E", { 3 } },
        { U"\x00AD\x0021", { 2 } },
        { U"\x00AD\x0308\x0021", { 3 } },
        { U"\x00AD\x0022", { 2 } },
        { U"\x00AD\x0308\x0022", { 3 } },
        { U"\x00AD\x002C", { 2 } },
        { U"\x00AD\x0308\x002C", { 3 } },
        { U"\x00AD\x00AD", { 2 } },
        { U"\x00AD\x0308\x00AD", { 3 } },
        { U"\x00AD\x0300", { 2 } },
        { U"\x00AD\x0308\x0300", { 3 } },
        { U"\x0300\x0001", { 2 } },
        { U"\x0300\x0308\x0001", { 3 } },
        { U"\x0300\x000D", { 2 } },
        { U"\x0300\x0308\x000D", { 3 } },
        { U"\x0300\x000A", { 2 } },
        { U"\x0300\x0308\x000A", { 3 } },
        { U"\x0300\x0085", { 2 } },
        { U"\x0300\x0308\x0085", { 3 } },
        { U"\x0300\x0009", { 2 } },
        { U"\x0300\x0308\x0009", { 3 } },
        { U"\x0300\x0061", { 2 } },
        { U"\x0300\x0308\x0061", { 3 } },
        { U"\x0300\x0041", { 2 } },
        { U"\x0300\x0308\x0041", { 3 } },
        { U"\x0300\x01BB", { 2 } },
        { U"\x0300\x0308\x01BB", { 3 } },
        { U"\x0300\x0030", { 2 } },
        { U"\x0300\x0308\x0030", { 3 } },
        { U"\x0300\x002E", { 2 } },
        { U"\x0300\x0308\x002E", { 3 } },
        { U"\x0300\x0021", { 2 } },
        { U"\x0300\x0308\x0021", { 3 } },
        { U"\x0300\x0022", { 2 } },
        { U"\x0300\x0308\x0022", { 3 } },
        { U"\x0300\x002C", { 2 } },
        { U"\x0300\x0308\x002C", { 3 } },
        { U"\x0300\x00AD", { 2 } },
        { U"\x0300\x0308\x00AD", { 3 } },
        { U"\x0300\x0300", { 2 } },
        { U"\x0300\x0308\x0300", { 3 } },
        { U"\x0028\x0022\x0047\x006F\x002E\x0022\x0029\x0020\x0028\x0048\x0065\x0020\x0064\x0069\x0064\x002E\x0029", { 8, 17 } },
        { U"\x0028\x201C\x0047\x006F\x003F\x201D\x0029\x0020\x0028\x0048\x0065\x0020\x0064\x0069\x0064\x002E\x0029", { 8, 17 } },
        { U"\x0055\x002E\x0053\x002E\x0041\x0300\x002E\x0020\x0069\x0073", { 10 } },
        { U"\x0055\x002E\x0053\x002E\x0041\x0300\x003F\x0020\x0048\x0065", { 8, 10 } },
        { U"\x0055\x002E\x0053\x002E\x0041\x0300\x002E", { 7 } },
        { U"\x0033\x002E\x0034", { 3 } },
        { U"\x0063\x002E\x0064", { 3 } },
        { U"\x0065\x0074\x0063\x002E\x0029\x2019\x00A0\x0074\x0068\x0065", { 10 } },
        { U"\x0065\x0074\x0063\x002E\x0029\x2019\x00A0\x0054\x0068\x0065", { 7, 10 } },
        { U"\x0065\x0074\x0063\x002E\x0029\x2019\x00A0\x2018\x0028\x0074\x0068\x0065", { 12 } },
        { U"\x0065\x0074\x0063\x002E\x0029\x2019\x00A0\x2018\x0028\x0054\x0068\x0065", { 7, 12 } },
        { U"\x0065\x0074\x0063\x002E\x0029\x2019\x00A0\x0308\x0074\x0068\x0065", { 11 } },
        { U"\x0065\x0074\x0063\x002E\x0029\x2019\x00A0\x0308\x0054\x0068\x0065", { 8, 11 } },
        { U"\x0065\x0074\x0063\x002E\x0029\x2019\x0308\x0054\x0068\x0065", { 7, 10 } },
        { U"\x0065\x0074\x0063\x002E\x0029\x000A\x0308\x0054\x0068\x0065", { 6, 10 } },
        { U"\x0074\x0068\x0065\x0020\x0072\x0065\x0073\x0070\x002E\x0020\x006C\x0065\x0061\x0064\x0065\x0072\x0073\x0020\x0061\x0072\x0065", { 21 } },
        { U"\x5B57\x002E\x5B57", { 2, 3 } },
        { U"\x0065\x0074\x0063\x002E\x5B83", { 4, 5 } },
        { U"\x0065\x0074\x0063\x002E\x3002", { 5 } },
        { U"\x5B57\x3002\x5B83", { 2, 3 } },
        { U"\x2060\x0028\x2060\x0022\x2060\x0047\x2060\x006F\x2060\x002E\x2060\x0022\x2060\x0029\x2060\x0020\x2060\x0028\x2060\x0048\x2060\x0065\x2060\x0020\x2060\x0064\x2060\x0069\x2060\x0064\x2060\x002E\x2060\x0029\x2060\x2060", { 17, 36 } },
        { U"\x2060\x0028\x2060\x201C\x2060\x0047\x2060\x006F\x2060\x003F\x2060\x201D\x2060\x0029\x2060\x0020\x2060\x0028\x2060\x0048\x2060\x0065\x2060\x0020\x2060\x0064\x2060\x0069\x2060\x0064\x2060\x002E\x2060\x0029\x2060\x2060", { 17, 36 } },
        { U"\x2060\x0055\x2060\x002E\x2060\x0053\x2060\x002E\x2060\x0041\x2060\x0300\x002E\x2060\x0020\x2060\x0069\x2060\x0073\x2060\x2060", { 21 } },
        { U"\x2060\x0055\x2060\x002E\x2060\x0053\x2060\x002E\x2060\x0041\x2060\x0300\x003F\x2060\x0020\x2060\x0048\x2060\x0065\x2060\x2060", { 16, 21 } },
        { U"\x2060\x0055\x2060\x002E\x2060\x0053\x2060\x002E\x2060\x0041\x2060\x0300\x002E\x2060\x2060", { 15 } },
        { U"\x2060\x0033\x2060\x002E\x2060\x0034\x2060\x2060", { 8 } },
        { U"\x2060\x0063\x2060\x002E\x2060\x0064\x2060\x2060", { 8 } },
        { U"\x2060\x0065\x2060\x0074\x2060\x0063\x2060\x002E\x2060\x0029\x2060\x2019\x2060\x00A0\x2060\x0074\x2060\x0068\x2060\x0065\x2060\x2060", { 22 } },
        { U"\x2060\x0065\x2060\x0074\x2060\x0063\x2060\x002E\x2060\x0029\x2060\x2019\x2060\x00A0\x2060\x0054\x2060\x0068\x2060\x0065\x2060\x2060", { 15, 22 } },
        { U"\x2060\x0065\x2060\x0074\x2060\x0063\x2060\x002E\x2060\x0029\x2060\x2019\x2060\x00A0\x2060\x2018\x2060\x0028\x2060\x0074\x2060\x0068\x2060\x0065\x2060\x2060", { 26 } },
        { U"\x2060\x0065\x2060\x0074\x2060\x0063\x2060\x002E\x2060\x0029\x2060\x2019\x2060\x00A0\x2060\x2018\x2060\x0028\x2060\x0054\x2060\x0068\x2060\x0065\x2060\x2060", { 15, 26 } },
        { U"\x2060\x0065\x2060\x0074\x2060\x0063\x2060\x002E\x2060\x0029\x2060\x2019\x2060\x00A0\x2060\x0308\x0074\x2060\x0068\x2060\x0065\x2060\x2060", { 23 } },
        { U"\x2060\x0065\x2060\x0074\x2060\x0063\x2060\x002E\x2060\x0029\x2060\x2019\x2060\x00A0\x2060\x0308\x0054\x2060\x0068\x2060\x0065\x2060\x2060", { 16, 23 } },
        { U"\x2060\x0065\x2060\x0074\x2060\x0063\x2060\x002E\x2060\x0029\x2060\x2019\x2060\x0308\x0054\x2060\x0068\x2060\x0065\x2060\x2060", { 14, 21 } },
        { U"\x2060\x0065\x2060\x0074\x2060\x0063\x2060\x002E\x2060\x0029\x2060\x000A\x2060\x0308\x2060\x0054\x2060\x0068\x2060\x0065\x2060\x2060", { 12, 22 } },
        { U"\x2060\x0074\x2060\x0068\x2060\x0065\x2060\x0020\x2060\x0072\x2060\x0065\x2060\x0073\x2060\x0070\x2060\x002E\x2060\x0020\x2060\x006C\x2060\x0065\x2060\x0061\x2060\x0064\x2060\x0065\x2060\x0072\x2060\x0073\x2060\x0020\x2060\x0061\x2060\x0072\x2060\x0065\x2060\x2060", { 44 } },
        { U"\x2060\x5B57\x2060\x002E\x2060\x5B57\x2060\x2060", { 5, 8 } },
        { U"\x2060\x0065\x2060\x0074\x2060\x0063\x2060\x002E\x2060\x5B83\x2060\x2060", { 9, 12 } },
        { U"\x2060\x0065\x2060\x0074\x2060\x0063\x2060\x002E\x2060\x3002\x2060\x2060", { 12 } },
        { U"\x2060\x5B57\x2060\x3002\x2060\x5B83\x2060\x2060", { 5, 8 } },
        { U"\x1F1E6\x1F1E7\x1F1E8", { 3 } },
        { U"\x1F1E6\x200D\x1F1E7\x1F1E8", { 4 } },
        { U"\x1F1E6\x1F1E7\x200D\x1F1E8", { 4 } },
        { U"\x0020\x200D\x0646", { 3 } },
        { U"\x0646\x200D\x0020", { 3 } },
    };
} // namespace test
