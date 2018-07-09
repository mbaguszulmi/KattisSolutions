# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/drmmessages
# http://www.mbaguszulmi.com

def rotate(string):
    numIdx = 0
    for i in string:
        numIdx+=abc.find(i)

    stringRotate = ''
    for i in string:
        add = numIdx+abc.find(i)
        while add >= len(abc):
            add-=len(abc)
        stringRotate+=abc[add]
    return stringRotate

def merge(string1, string2):
    mergeString = ''
    for i in range(len(string1)):
        add=abc.find(string1[i])+abc.find(string2[i])
        while add >= len(abc):
            add-=len(abc)
        mergeString+=abc[add]
    return mergeString

def main():
    global abc
    abc = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ'
    message = raw_input()
    size = len(message)
    message1 = message[:size/2]
    message2 = message[size/2:]
    # message1Rotate = rotate(message1)
    # message2Rotate = rotate(message2)
    print merge(rotate(message1), rotate(message2))

if __name__ == '__main__':
    main()