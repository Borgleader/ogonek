#! /usr/bin/python

import codecs
import ntpath
import os
import re
import string
import sys
from datetime import datetime
from operator import itemgetter

class CharId:
	def __init__(self, string):
		self.id = string

	def __str__(self):
		return 'U\'\\x' + self.id + '\''


def isValidLine(line):
	isEmpty = len(line) <= 1
	isComment = line.startswith('#') or line.startswith('@')

	return not (isEmpty or isComment)


if __name__ == '__main__':
	if len(sys.argv) != 3:
	    print 'usage: ' + os.path.basename(sys.argv[0]) + ' <source file> <destination directory>'
	    sys.exit()

	sourceFile = codecs.open(sys.argv[1], 'r', 'utf-8')
	sourceFileName = ntpath.basename(sys.argv[1]).split('.')[0]
	sourceFileName = sourceFileName.replace('_SHORT', '')
	destDir = sys.argv[2]

	copyrightTemplateString = string.Template('''// Ogonek
//
// Written in 2014 by Martinho Fernandes <martinho.fernandes@gmail.com>
//
// To the extent possible under law, the author(s) have dedicated all copyright and related
// and neighboring rights to this software to the public domain worldwide. This software is
// distributed without any warranty.
//
// You should have received a copy of the CC0 Public Domain Dedication along with this software.
// If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.

// This file was automatically generated on ${date}

// DUCET table data

''')

	with open(os.path.join(destDir, sourceFileName + '.g.inl'), 'w') as testDataFile:
		testDataFile.write(copyrightTemplateString.substitute(date=datetime.utcnow().isoformat()+'Z'))
		for line in sourceFile:
			if isValidLine(line):
				line = line[:line.find(';')] # remove comment
				charIds = map(CharId, line.split(' '))
				testDataFile.write('{' + ', '.join(map(str, charIds)) + '},' + os.linesep)
