# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/helpaphd
# http://www.mbaguszulmi.com

def main():
    n = input()
    value = []
    for i in range(n):
        inputStr = raw_input().split('+')
        if len(inputStr) == 2:
            value.append(int(inputStr[0])+int(inputStr[1]))
        else:
            value.append('skipped')
    
    for i in value:
        print i

if __name__ == '__main__':
    main()