#!/usr/bin/python
import time
def disp_join(x):
    join='ﾐ(φ)ﾐ'
    s=chr(13)+" "*x+join+" "
    print(s,end='')
    time.sleep(0.1)

def main():
    for x in range(0,75):
        disp_join(x)
    for x in range(74,0,-1):
        disp_join(x)
    for x in range(0,75):
        disp_join(x)
    for x in range(74,0,-1):
        disp_join(x)
    for x in range(0,37):
        disp_join(x)
    print(chr(13)+"                                   ﾐ((Φ))ﾐ  < Spread!")


if __name__=='__main__':
    main()
    exit(0)
