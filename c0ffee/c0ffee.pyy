#!/usr/bin/python
import sys

def hexword(w):
    w=w.replace('O','0').replace('o','0')
    for k in w:
        if k.upper() not in 'ABCDEF0':
            return ""
    return w

def main():
    fn=sys.argv[1]
    file=open(fn,"rt")
    text=file.read()
    words=text.split()
    words=[w for w in words if w]
    for i in words:
        if w:=hexword(i):
            print(w)

if __name__=="__main__":
    main()
    exit(0)
