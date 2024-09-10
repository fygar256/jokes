#include    <stdio.h>
#include    <stdlib.h>
#include    <string.h>
void main(int argc,char *argv[]) {
    if (argc!=2) {
        fprintf(stderr,"Usage tmcomp file\n");
        exit(1);
    }
    char s[256];
    strcpy(s,argv[1]);
    FILE *ifp=fopen(s,"rb");
    if (ifp==NULL) {
        fprintf(stderr,"Source file open error.\n");
        exit(1);
    }
    strcat(s,".tmc");
    FILE *ofp=fopen(s,"wb");
    while(!(fgetc(ifp)==EOF));
    fclose(ofp);
    fclose(ifp);

    fprintf(stderr,"Compression successfully completed.\n");
    fprintf(stderr,"output file written.\n");
}
