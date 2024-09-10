// Version 1.1
#include <stdio.h>
#include <stdlib.h>

#define N 100000
char  a[N];

int gama_koujyou() {
 printf("さあさ、お立ち会い。ご用とお急ぎでない方は　ゆっくりと聞いておいで。\n");
 printf("遠出の山越し笠のうち、聞かざるときは物の黒白、善悪がとんとわからない。\n");
 printf("山寺の鐘がゴオーン、ゴオーンと鳴るといえども、童子きたって鐘に\n");
 printf("撞木を与えずば、とんと鐘の音色がわからない。\n");
 printf("さて、お立ち会い。手前ここに取り出したるは陣中膏、蝦蟇の油。\n");
 printf("さーて、お立ち会い。蝦蟇と申しましてもただの蝦蟇とは蝦蟇が違う。\n");
 printf("関東は筑波山の麓、おんばこという露草を食って育った四六の蝦蟇だ。\n");
 printf("四六五六はどこで見分ける。前足の指が四本、うしろ足の指が六本、\n");
 printf("併せて四六の蝦蟇。山中ふかく分け入って捕らえたこの蝦蟇を、\n");
 printf("四面鏡の箱に入れると、蝦蟇は己の姿が鏡に写るのを見て吃驚仰天、\n");
 printf("タラーリ、タラーリと脂汗を流す。これをすき取り、柳の小枝で三七、\n");
 printf("二十と一日トローリ、トローリと煮詰めましたるがこの陣中膏蝦蟇の油。\n");
 printf("蝦蟇の油の効能は、ひびにあかぎれ、しもやけの妙薬。・・まだある。\n");
 printf("出痔、いぼ痔、はしり痔、はれもの一切。まあ、ちょっとお待ち。\n");
 printf("蝦蟇の油の効能はそればかりかというと、まだある。\n\n");
 printf("切れ物の切れ味をとめるという。手前持ちいだしたるは、鈍刀といえど、\n");
 printf("先が斬れて、元が斬れぬ、半ばが斬れぬというのではない。ごらんの通り、\n");
 printf("抜けば玉散る氷の刃だ、お立会い。取り出したるは夏なお寒き氷の刃！\n");
 printf("Hit enter key\n");
 getchar();
}

int gama_koujyou2()
{
  printf("これこの通り、フウッと散らせば　比良の暮雪は　雪降りの型。\n");
  printf("これなる名刀も、ひとたびこの蝦蟇の油をつけるときは、\n");
  printf("たちまち切れ味が止まる。押しても引いても切れはせぬ。\n");
  printf("と言うても、なまくらになったのではないぞー、お立ち会い！\n");
  printf("このようにきれいにふき取るときは、もとの切れ味になって、\n");
  printf("これこのとおり。\n");
  printf("さてお立ち会い。蝦蟇の油の効能が分かったら遠慮はご無用。\n");
  printf("どんどん買ってお行きやれ・・・\n");
}

int mul2(char *a)
{
  int carry=0,d,j;
  char  b[N];
  for(int i=0;i<N;i++)
    b[i]='\0';
  for(j=0;a[j]!='\0';j++) {
    d=(a[j]-'0')*2+carry;
    carry=d/10;
    d%=10;
    b[j]=d+'0';
    }
  if (carry) { b[j]='1'; }
  for(int i=0;b[i]!='\0';i++) {
    a[i]=b[i];
    }
}

int print(char *str)
{
  int l=0;
  while(*str!='\0') {str++; if (++l >= N) break;}
  str--;
  for(int i=0;i<l;i++)
    printf("%c",*str--);
}

int gama()
{
  gama_koujyou();
  for(int i=1;i<N;i++)
    a[i]='\0';
  a[0]='1';

 for(double k=1;k<=128;k++) {
    print(a);
    printf("枚が");
    mul2(a);
    print(a);
    printf("枚、\n");
    }
  gama_koujyou2();
}

int main()
{
  gama();
    return EXIT_SUCCESS;
}
