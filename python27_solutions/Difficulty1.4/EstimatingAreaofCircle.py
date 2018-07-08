# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/estimatingtheareaofacircle
# http://www.mbaguszulmi.com

def main():
    area = []
    PI = 3.141592654
    while 1:
        inputStr = raw_input().split()
        
        if inputStr[0] == '0' and inputStr[1] == '0' and inputStr[2] == '0':
            break
        else:
            r = float(inputStr[0])
            m = int(inputStr[1])
            c = int(inputStr[2])

            area.append(str(PI*r**2)+' '+str((r**2)*4*(float(c)/m)))
    
    for i in area:
        print i


if __name__ == '__main__':
    main()