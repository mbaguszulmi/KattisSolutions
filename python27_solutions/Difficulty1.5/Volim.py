# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/volim
# http://www.mbaguszulmi.com

def main():
    k = input()
    n = input()
    exploded = False
    timeElapsed = 0
    for i in range(n):
        inputStr = raw_input().split()
        if not exploded:
            t = int(inputStr[0])
            z = inputStr[1]

            timeElapsed+=t
            if timeElapsed >= 210:
                exploded = True
            elif z == 'T':
                k+=1
                if k > 8:
                    k-=8
    
    print k
            

if __name__ == '__main__':
    main()