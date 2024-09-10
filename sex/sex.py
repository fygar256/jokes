#!/usr/bin/python3
#
# SEX Sign EXtend
# 符号拡張
#
bitn=24 # bit 数
a=0xc0ffee # 24 bit の負の値
b=0x7fffff # 24 bit の正の値
p=0xffffffffffffffff # 64bit 全ビットオンのパターン

r1=a|((p<<bitn) if ((a>>bitn-1&1) !=0) else 0)
r2=b|((p<<bitn) if ((b>>bitn-1&1) !=0) else 0)

print("%d %d %016x %016x" % (a,r1,a,r1))
print("%d %d %016x %016x" % (b,r2,b,r2))
