# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/symmetricorder
# http://www.mbaguszulmi.com

def main():
    symmetricNames = []
    while 1:
        n = input()
        if n == 0:
            break
        else:
            firstName = []
            secondName = []
            for i in range(n):
                if i%2 == 0:
                    firstName.append(raw_input())
                else:
                    if len(secondName) == 0:
                        secondName.append(raw_input())
                    else:
                        secondName.insert(0, raw_input())
            
            symmetricNames.append(firstName+secondName)
    
    set=1
    for i in symmetricNames:
        print 'SET', set
        for j in i:
            print j
        set+=1

if __name__ == '__main__':
    main()