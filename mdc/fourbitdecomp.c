#include"head.h"
char* fourbitdecomp(char *res,char *ma )
{
        unsigned char *dp,*res1;unsigned char a,b;
        int count=strlen(res);
        leng=strlen(ma);
        int i,k,j;
//        printf("decomp %s  %d  %s\n",ma,leng,res);
        dp=malloc(255);
        res1=malloc(255);
        for(i=0,k=0;i<count;i++,k=k+2)
        {
                a=*(res+i);
                a=a>>4;
                *(dp+k)=a;
                b=*(res+i);
                b=b<<4;
                b=b>>4;
                *(dp+k+1)=b;
        }
        for(i=0;i<k;i++)
        {
                for(j=0;j<leng;j++)
                {
                        if(*(dp+i)==j)
                        {
                                *(res1+i)=*(ma+j);
                        }
                }
        }
        count=strlen(res1);
  //      printf("\n6: %s  %d\n",res1,count);
        return res1;
}

