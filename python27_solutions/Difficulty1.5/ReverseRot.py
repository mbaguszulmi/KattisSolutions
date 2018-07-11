# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/reverserot
# http://www.mbaguszulmi.com

def reverse(string):
	outputStr = ''
	for i in range(len(string)-1, -1, -1):
		outputStr+=string[i]
	return outputStr

def rotate(string, rot):
	outputStr = ''
	for i in range(len(string)):
		addRot = order.find(string[i])+rot
		size = len(order)
		while addRot >= size:
			addRot-=size
		outputStr+=order[addRot]
	
	return outputStr

def main():
	global order
	order = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ_.'
	encrypted = []
	while 1:
		inputStr = raw_input().split()
		if inputStr[0] == '0':
			break
		else:
			encrypted.append(rotate(reverse(inputStr[1]), int(inputStr[0])))
	
	for i in encrypted:
		print i

if __name__ == '__main__':
	main()