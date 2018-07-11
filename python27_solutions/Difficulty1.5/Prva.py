# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/prva
# http://www.mbaguszulmi.com

def main():
	inputStr = raw_input().split()
	r = int(inputStr[0])
	c = int(inputStr[1])
	crossWord = []
	for i in range(r):
		rowWord = raw_input()
		crossWord.append(list(rowWord))
	
	words = []
	for i in range(c):
		wordTemp = ''
		currWord = 0
		for j in range(r):
			if crossWord[j][i] != '#':
				currWord+=1
				wordTemp+=crossWord[j][i]

			if crossWord[j][i] == '#' or j+1 == r:
				if currWord >= 2:
					words.append(wordTemp)
				wordTemp = ''
				currWord = 0

	for i in range(r):
		wordTemp = ''
		currWord = 0
		for j in range(c):
			if crossWord[i][j] != '#':
				currWord+=1
				wordTemp+=crossWord[i][j]
			
			if crossWord[i][j] == '#' or j+1 == c:
				if currWord >= 2:
					words.append(wordTemp)
				wordTemp = ''
				currWord = 0
	
	words.sort()
	
	print words[0]

if __name__ == '__main__':
	main()