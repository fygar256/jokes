#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>
void main(int argc,char *argv[]) {
    if (argc!=2) {
        fprintf((stderr),"Error invalid argmants");
        exit(1);
        }
    char *s=argv[1];
    if (strcmp(&(s[strlen(s)-4]),".tmc")!=0) {
        fprintf((stderr),"It is not .tmc file.\n");
        exit(1);
        }
    char spi[strlen(s)-4];
    strncpy(spi,s,strlen(s)-4);
    FILE *efp=fopen(s,"r");
    if (efp==NULL) {
        fprintf(stderr,"File does not exsist.\n");
        exit(1);
        }
    FILE *ofp=fopen(spi,"wb");
    fputc((int)0xa,ofp);
    fclose(efp);
    fclose(ofp);
}
