#include"head.h"
char* master_array(char *buff)
{
        int i,j,k=0,c=0,h=1;
        unsigned char *ma;
        ma=malloc(255);
        len=strlen(buff);
        for(i=0;i<len;i++)
        {
                for(j=0;j<=i;j++)
                {
                        if(*(buff+i)==*(buff+j))
                        {
                                c++;
                                if(c>1)
                                        break;
                        }
                }
                if(c==1)
                {
                        *(ma+k)=*(buff+i);
                        k++;
                }
                c=0;
        }
        leng=strlen(ma);
        for(i=0;h<leng;i++)
        {
                h=2*h;
        }
        h=i;
        return ma;
}


