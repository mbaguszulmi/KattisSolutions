# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/hangingout
# http://www.mbaguszulmi.com

def main():
    inputStr = raw_input().split()
    maxPerson = int(inputStr[0])
    numGroup = int(inputStr[1])
    currPeople = 0
    deniedGroup = 0

    for i in range(numGroup):
        inputStr = raw_input().split()
        if inputStr[0] == 'enter':
            if currPeople + int(inputStr[1]) <= maxPerson:
                currPeople+=int(inputStr[1])
            else:
                deniedGroup+=1
        else:
            currPeople-=int(inputStr[1])
    
    del i
    
    print deniedGroup

if __name__ == '__main__':
    main()