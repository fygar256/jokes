/*
   SEX Sign EXpand
   24bitから32bitの、符号付き拡張
 */

#include	<stdio.h>

long	sex(long a,int i)
{
	unsigned long p=-1;
	return(a|(a>>i-1&1?p<<i:0));
}
void main()
{
	int a=0xc0ffee;									/* 24 bit の負の値 */
	int	b=0x7fffff;									/* 24 bit の正の値 */
	int	bitn=24;										/* bit 数 24 */
	int r1,r2;											/* 結果を格納する変数 */
	unsigned int i=-1;						/* 拡張パターン */

	r1=a|(a>>bitn-1&1?i<<bitn:0);
	r2=b|(b>>bitn-1&1?i<<bitn:0);

	printf("%d %d %x %x\n",a,r1,a,r1);
	printf("%d %d %x %x\n",b,r2,b,r2);

	for(int j=0;j<64;j++) {
		printf("%d:%0lx\n",j,sex(a,j));
		}
}
