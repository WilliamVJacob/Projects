#include"head.h"
char* fourbitcomp(char *buff, char *ma)
{
        unsigned char *res;res=malloc(255);
        int i,j,k=0; unsigned char a,b;
        len=strlen(buff);
        leng=strlen(ma);
//        printf("1: %s 2: %d\n",buff,len);
  //      printf("3: %s 4: %d\n",ma,leng);
        for(i=0;i<len;i++)
        {
                for(j=0;j<leng;j++)
                {
                        if(*(buff+i)==*(ma+j))
                        {
                                a=(char)j;
                                a=a<<4;
                        }
                }
                i++;
                for(j=0;j<leng;j++)
                {
                        if(*(buff+i)==*(ma+j))
                        {

                                b=(char)j;
                                b=b<<4;
                                b=b>>4;
                        }
                }
                *(res+k)=a|b;
                k++;
        }
    //    count=strlen(res);
        return res;
}

