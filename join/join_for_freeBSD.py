#!/usr/bin/env python3
import time
def print_join(n):
    print(chr(13)+" "*n+"ﾐφ ﾐ ",end='')
    time.sleep(0.05)

def main():
    for j in range(2):
        for i in range(72):
            print_join(i)

        for i in range(71,-1,-1):
            print_join(i)

    for j in range(40):
            print_join(j)

    print(chr(13)+" "*39+"ﾐ(Φ )ﾐ < Spread!")

if __name__=='__main__':
    main()
    exit(0)


