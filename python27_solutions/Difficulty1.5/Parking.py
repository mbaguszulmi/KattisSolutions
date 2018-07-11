# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/parking
# http://www.mbaguszulmi.com

def main():
	inputStr = raw_input().split()
	cost = [int(inputStr[0]), int(inputStr[1]), int(inputStr[2])]

	totalCost = 0
	times = []
	_min = 101
	_max = 0
	for i in range(3):
		inputStr = raw_input().split()
		arrival = int(inputStr[0])
		departure = int(inputStr[1])
		times.append(range(arrival, departure))
		if arrival < _min:
			_min = arrival
		
		if departure > _max:
			_max = departure
	
	for i in range(_min, _max):
		numCar = 0
		for j in range(3):
			if i in times[j]:
				numCar+=1
		
		totalCost+=numCar*cost[numCar-1]
	
	print totalCost

if __name__ == '__main__':
	main()