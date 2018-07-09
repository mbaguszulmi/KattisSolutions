# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/alphabetspam
# http://www.mbaguszulmi.com

def main():
	numWhitespace = 0
	numLowercase = 0
	numUppercase = 0
	numSymbol = 0
	
	string = raw_input()
	size = len(string)
	for i in string:
		if i == '_':
			numWhitespace+=1
		else:
			asciiNum = ord(i)
			if asciiNum >= 97 and asciiNum <= 122:
				numLowercase+=1
			elif asciiNum >=65 and asciiNum <=90:
				numUppercase+=1
			elif (asciiNum >= 33 and asciiNum <= 64) or (asciiNum >= 91 and asciiNum <= 96) or (asciiNum >= 123 and asciiNum <= 126):
				numSymbol+=1
	
	print '%.15f'%(float(numWhitespace)/size)
	print '%.15f'%(float(numLowercase)/size)
	print '%.15f'%(float(numUppercase)/size)
	print '%.15f'%(float(numSymbol)/size)

if __name__ == '__main__':
	main()