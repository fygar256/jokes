#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>
#define SP " "
#define VL "┃"
#define HL "━"
#define RB "┣"
#define LB "┫"
#define VLSP (VL SP)
#define LBSP (LB SP)
#define RBHL (RB HL)
#define rnd(x) (rand()%x)
#define XM  300
#define YM  300
static  int bar[XM][YM];

void make_amida(int xmx,int ymx) {
  int i,x,y;

  for(y=0;y<YM;y++)
    for(x=0;x<XM;x++)
      bar[x][y]=0;

  for(i=0;i<xmx*ymx/4;i++) {
    x=rnd(xmx),y=rnd(ymx/2+1);
    if ( (x==0||(x>0&&bar[x-1][y]==0)) &&
       (x==xmx||(x<xmx&&bar[x+1][y]==0)))
      bar[x][y]=bar[x][ymx-y]=1;
  }
}
      
void extra_line(int xmx,int n) {
  int i,x;
  for(i=0;i<n;i++) {
    for(x=0;x<=xmx;x++)
      printf("%s",VLSP);
    printf("\n");
    }
}

void disp_amida(int xmx,int ymx) {
  int f,x,y;

  extra_line(xmx,3);
  for(y=0;y<ymx;y++) {
    f=0;
    for(x=0;x<xmx+1;x++)
      if (bar[x][y]) printf("%s",RBHL),f=1;
      else printf("%s",f?LBSP:VLSP),f=0;
    printf("\n");
    }
  extra_line(xmx,3);
}

void main(int argc,char **argv) {
  int xmx,ymx;

  srand((unsigned)time(NULL));
  xmx=20,ymx=20;
  switch(argc) {
    case 1:
      break;
    case 2:
      sscanf(argv[1],"%d",&xmx);
      break;
    case 3:
      sscanf(argv[1],"%d",&xmx);
      sscanf(argv[2],"%d",&ymx);
      break;
    }
  if (ymx%2==0) ymx--;
  if (ymx<=14) ymx=15;
  if (xmx<3) xmx=3;
  xmx--;
  make_amida(xmx,ymx);
  disp_amida(xmx,ymx);
  exit(0);
}
