#include"head.h"
void main()
{

	unsigned char *ma,*res,*res1,*buff;
        buff=malloc(255);
        ma=malloc(255);
        res=malloc(255);
        res1=malloc(255);
        buff=file2buff();
        // *buff="she sell sea shells on the sea shore";
        ma=master_array(buff);
        res=fourbitcomp(buff,ma);
        res1=fourbitdecomp(res,ma);
        buff2file(res1);
        printf("5:%s",res1);
}

