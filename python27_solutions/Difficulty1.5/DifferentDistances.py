# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/differentdistances
# http://www.mbaguszulmi.com

def main():
    norms = []
    while 1:
        inputStr = raw_input().split()
        if inputStr == ['0']:
            break
        else:
            p = float(inputStr[4])
            norms.append(((abs(float(inputStr[0])-float(inputStr[2]))**p)+(abs(float(inputStr[1])-float(inputStr[3]))**p))**(1/p))
    
    for i in norms:
        print '%.10f'%(i)

if __name__ == '__main__':
    main()