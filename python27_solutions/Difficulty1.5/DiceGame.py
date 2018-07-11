# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/dicegame
# http://www.mbaguszulmi.com

def getTotal(points):
    total = 0
    for i in points:
        total+=int(i)
    return total

def main():
    players = [None]*2
    players[0] = raw_input().split()
    players[1] = raw_input().split()

    gunnar = getTotal(players[0])
    emma = getTotal(players[1])

    if gunnar > emma:
        print 'Gunnar'
    elif emma > gunnar:
        print 'Emma'
    else:
        print 'Tie'

if __name__ == '__main__':
    main()