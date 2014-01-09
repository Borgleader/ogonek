#! /usr/bin/python

import codecs
import os
import re
import string
import sys
from datetime import datetime
from operator import itemgetter

class CollationElement:
	def __init__(self, string):
		if string.startswith('*'):
			self.varWeight = 'true'
		else:
			self.varWeight = 'false'

		string = string[1:]
		self.weights = [int(x, 16) for x in string.split('.')]

	def __str__(self):
		return '{' + self.varWeight + ', {' + ', '.join(map(str, self.weights)) + '}}'


class CharId:
	def __init__(self, string):
		self.id = string

	def __str__(self):
		return 'U\'\\x' + self.id + '\''


# Checks if it's not empty, and doesn't start with # or @
def isValidLine(line):
	emptyLine = len(line) <= 1
	commentLine = line.startswith('#') or line.startswith('@')

	return not (emptyLine or commentLine)


if __name__ == '__main__':
	if len(sys.argv) != 3:
	    print 'usage: ' + os.path.basename(sys.argv[0]) + ' <table source file> <destination directory>'
	    sys.exit()

	sourceTable = codecs.open(sys.argv[1], 'r', 'utf-8')
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

	with open(os.path.join(destDir, 'ducet.g.inl'), 'w') as ducetFile:
		ducetFile.write(copyrightTemplateString.substitute(date=datetime.utcnow().isoformat()+'Z'))
		for line in sourceTable:
			if(isValidLine(line)):
				# Remove comment
				line = line[0:line.find('#')]

				idStrings = filter(None, line[0:line.find(' ;')].split(' ')) 
				charIds = map(CharId, idStrings)
				matches = map(itemgetter(0), re.findall('\[(((\*|\.)\w{4})+)\]', line))
				collationElements = map(CollationElement, matches)

				ducetFile.write('{{' + ', '.join(map(str, charIds)) + '}, {' + 
								', '.join(map(str, collationElements)) + '}},' + os.linesep)
