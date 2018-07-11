# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/acm
# http://www.mbaguszulmi.com

def main():
    wrong = {}
    totalTime = 0
    problemSolved = 0
    while 1:
        inputStr = raw_input().split()
        if inputStr == ['-1']:
            break
        else:
            if inputStr[2] == 'right':
                problemSolved+=1
                totalTime+=int(inputStr[0])
                if inputStr[1] in wrong:
                    totalTime+=wrong[inputStr[1]]
            else:
                if inputStr[1] not in wrong:
                    wrong[inputStr[1]] = 20
                else:
                    wrong[inputStr[1]]+=20
    print problemSolved, totalTime

if __name__ == '__main__':
    main()