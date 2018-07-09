# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/synchronizinglists
# http://www.mbaguszulmi.com

def main():
    SyncedList = []
    while 1:
        n = input()
        if n == 0:
            break
        else:
            list1 = []
            list2 = []
            for i in range(n):
                list1.append(input())
            for i in range(n):
                list2.append(input())
            list1Ordered = list1[:]
            list1Ordered.sort()
            list2Ordered = list2[:]
            list2 = []
            list2Ordered.sort()

            for i in list1:
                pos = list1Ordered.index(i)
                list2.append(list2Ordered[pos])
            
            SyncedList.append(list2)
    
    for i in SyncedList:
        for j in i:
            print j
        print ''

if __name__ == '__main__':
    main()