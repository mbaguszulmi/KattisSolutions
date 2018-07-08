# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/heartrate
# http://www.mbaguszulmi.com

def main():
    n = input()
    nice = []
    for i in range(n):
        nice.append([])
    for i in range(n):
        inputStr = raw_input().split()
        b = int(inputStr[0])
        p = float(inputStr[1])
        
        nice[i].append(60/(p/(b-1)))
        nice[i].append((60*b)/p)
        nice[i].append(60/(p/(b+1)))
    
    for i in range(n):
        print "%.4f %.4f %.4f" %(nice[i][0], nice[i][1], nice[i][2])

if __name__ == '__main__':
    main()