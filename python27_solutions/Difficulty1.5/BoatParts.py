# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/boatparts
# http://www.mbaguszulmi.com

def main():
	inputStr = raw_input().split()
	p = int(inputStr[0])
	n = int(inputStr[1])
	day = 0
	partName = []
	for i in range(n):
		name = raw_input()
		if name not in partName:
			partName.append(name)
			if len(partName) == p and day == 0:
				day = i+1
				partName = []
	
	if day != 0:
		print day
	else:
		print 'paradox avoided'

if __name__ == '__main__':
	main()