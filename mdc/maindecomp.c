#include"head.h"
void main()
{

        unsigned char *ma,*res,*res1,*buff;
        buff=malloc(255);
        ma=malloc(255);
        res=malloc(255);
        res1=malloc(255);
	printf("\nEnter the file name to decript:");
        buff=file2buff();
	ma=file2key();
        // *buff="she sell sea shells on the sea shore";
    //    ma=master_array(buff);
      //  res=fourbitcomp(buff,ma);
        res1=fourbitdecomp(buff,ma);
	
	printf("\n\nEnter the file name to store the decripted file:");
        buff2file(res1);
	printf("\n\nFile Successfully decripted....\n");
//        printf("5:%s",res1);
}

                                                                                                                                                     
                                                                                                                                                     
                                                                                                                                                     
     
