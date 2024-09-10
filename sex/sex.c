/*
   SEX Sign EXtend
   符号拡張
 */

#include    <stdio.h>

/*
 * input:  bitn 何ビット目で符号拡張するか
 *         a    被演算数
 *
 * output: 符号拡張された結果
 *
 */
long sex(long a,int bitn) {
    unsigned long p=-1;
    long r;

    r=(a&~(p<<bitn))|(a>>(bitn-1)&1?p<<bitn:0);

    return(r);
}

int main()
{
    long a=0xc0ffee;     /* 24 bit の負の値 */
    long b=0x7fffff;     /* 24 bit の正の値 */
    long r1,r2;          /* 結果を格納する変数 */

    r1 = sex(a,24);
    r2 = sex(b,24);
    printf("%ld %ld %016lx %016lx\n",a,r1,a,r1);
    printf("%ld %ld %016lx %016lx\n",b,r2,b,r2);
}
