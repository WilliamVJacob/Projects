#include"head.h"
void main()
{

        unsigned char *ma,*res,*buff,*res1;
        buff=malloc(255);
        ma=malloc(255);
        res=malloc(255);
        res1=malloc(255);
	printf("\nENter the name of the file to compress:");
        buff=file2buff();
        // *buff="she sell sea shells on the sea shore";
        ma=master_array(buff);
        res=fourbitcomp(buff,ma);
  //      res1=fourbitdecomp(res,ma);
 //       ma1=mastore(ma);
	
	printf("\nEnter the file name for storing encripted data:");
	buff2file(res);
	printf("\n\nFile successfully encripted ...\n");
	buff2key(ma);
//        printf("5:%s",res);
}

                                                                                                                                                     
                                                                                                                                                     
                                                                                                                                                     
     
