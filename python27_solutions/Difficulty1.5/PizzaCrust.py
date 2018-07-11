# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/pizza2
# http://www.mbaguszulmi.com

def main():
    inputStr = raw_input().split()
    r = int(inputStr[0])
    c = int(inputStr[1])
    crustArea = (2*r*c) - (c**2)
    squareR = r**2
    percentage = float(squareR - crustArea)/squareR

    print '%.6f'%(percentage*100)
    

if __name__ == '__main__':
    main()