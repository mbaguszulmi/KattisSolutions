# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/mixedfractions
# http://www.mbaguszulmi.com

def main():
    ans = []
    while 1:
        inputStr = raw_input().split()
        if inputStr == ['0', '0']:
            break
        else:
            num = int(inputStr[0])
            denom = int(inputStr[1])
            if num < denom:
                ans.append('0 '+inputStr[0]+' / '+inputStr[1])
            else:
                mix = num/denom
                num%=denom
                ans.append(str(mix)+' '+str(num)+' / '+inputStr[1])
    
    for i in ans:
        print i

if __name__ == '__main__':
    main()