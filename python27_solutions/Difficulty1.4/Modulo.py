# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/modulo
# http://www.mbaguszulmi.com

def main():
	distinct = []
	for i in range(10):
		mod = input()%42
		if mod not in distinct:
			distinct.append(mod)
	
	del i
	print len(distinct)

if __name__ == '__main__':
	main()