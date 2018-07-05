# Program by Muhammad Bagus Zulmi
# Url to problem : https://open.kattis.com/problems/kemija08
# http://www.mbaguszulmi.com

def main():
    vocal = 'aiueo'
    decode = ''
    encode = raw_input()
    i = 0
    while i < len(encode):
        decode+=encode[i]
        if encode[i] in vocal:
            i+=3
        else:
            i+=1
    
    print decode

if __name__ == '__main__':
    main()