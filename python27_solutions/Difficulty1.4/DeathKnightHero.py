# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/deathknight
# http://www.mbaguszulmi.com

def main():
    n = input()
    won = 0
    for i in range(n):
        seq = raw_input()
        win = True
        for j in range(len(seq)):
            if j+1 != len(seq) and seq[j] == 'C' and seq[j+1] == 'D':
                win = False
                break
            # elif j+1 != len(seq) and seq[j] == 'C' and seq[j+1] != 'D':
            #     won+=1
            #     break
        if win:
            won+=1
    del i
    
    print won

if __name__ == '__main__':
    main()