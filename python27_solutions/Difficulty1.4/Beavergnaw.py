# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/beavergnaw
# http://www.mbaguszulmi.com

def main():
    pi = 3.141592653589793238462643383279502884197169399375105820974944592307816406286
    dInner = []
    while 1:
        inputStr = raw_input().split()
        if inputStr[0] == '0' and inputStr[1] == '0':
            break
        else:
            d = int(inputStr[0])
            v = int(inputStr[1])
            total = 2*pi*((d/2.)**3)
            inner = total - (total/3) - v
            inner *= 3./2
            dInner.append(((inner/(2*pi))**(1./3))*2)
    
    for i in dInner:
        print '%.9f'%(i)

if __name__ == '__main__':
    main()