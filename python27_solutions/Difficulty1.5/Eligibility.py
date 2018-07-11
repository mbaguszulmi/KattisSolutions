# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/eligibility
# http://www.mbaguszulmi.com

def main():
    n = input()
    students = []
    for i in range(n):
        inputStr = raw_input().split()
        sdate = inputStr[1].split('/')
        bdate = inputStr[2].split('/')

        if int(sdate[0]) >= 2010 or int(bdate[0]) >= 1991:
            inputStr[0]+=' eligible'
        elif int(inputStr[3]) > 40:
            inputStr[0]+=' ineligible'
        else:
            inputStr[0]+=' coach petitions'
        
        students.append(inputStr[0])
    
    for i in students:
        print i
        

if __name__ == '__main__':
    main()