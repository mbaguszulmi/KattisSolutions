# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/soylent
# http://www.mbaguszulmi.com

def main():
	t = input()
	numBottle = []
	for i in range(t):
		n = input()
		bottle = n/400
		if n%400 != 0:
			bottle+=1
		numBottle.append(bottle)
	
	for i in numBottle:
		print i

if __name__ == '__main__':
	main()