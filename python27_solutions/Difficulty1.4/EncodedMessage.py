# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/encodedmessage
# http://www.mbaguszulmi.com

from math import sqrt

def main():
    n = input()
    DecodeMessage = []
    for i in range(n):
        EncodeMessage = raw_input()
        EncodeMatrix = []
        Decode = ''
        size = len(EncodeMessage)
        ordo = int(sqrt(size))
        for j in range(ordo):
            EncodeMatrix.append([])
            for k in range(ordo):
                EncodeMatrix[j].append(EncodeMessage[(j*ordo)+k])
        
        for j in range(ordo-1, -1, -1):
            for k in range(ordo):
                Decode+=EncodeMatrix[k][j]
        
        DecodeMessage.append(Decode)
    
    for i in DecodeMessage:
        print i
    

if __name__ == '__main__':
    main()