# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/sumkindofproblem
# http://www.mbaguszulmi.com

def main():
    p = input()
    final = []
    for i in range(p):
        inputStr = raw_input().split()
        value = [inputStr[0]]
        n = int(inputStr[1])
        value.append(n*(1+n)/2)
        unAddition = (n-1)*2
        value.append(n*(2+unAddition)/2)
        value.append(n*(4+unAddition)/2)
        final.append(value)
    
    for i in final:
        for j in i:
            print j,
        print ''

if __name__ == '__main__':
    main()