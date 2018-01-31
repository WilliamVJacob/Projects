#include"head.h"
void main()
{
	int i,j,k=0,c=0,h=1,len,leng,count;unsigned char a,b;
unsigned char *ma,*res,*res1,*dp;
	ma=malloc(255);
	res=malloc(255);
unsigned char *buff="she sell sea shells on the sea shore";
	
	len=strlen(buff);
	printf("1: %s 2: %d\n3:",buff,len);
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
			printf("%c",*(buff+i));
			k++;
		}
		c=0;
	}

	printf("4: %s",ma);
	leng=strlen(ma);
//	for(i=0;pow(2,i)<a;i++);
	for(i=0;h<leng;i++)
	{
		h=2*h;
	}
	printf("5: %d",i);		
	k=0;
	len=strlen(buff);
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
	count=strlen(res);
/*	for(i=0;i<count;i++)
	{
		printf("%c  ",*(res+i));
	}*/
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

/*	for(i=0;i<k;i++)
	{
		j=*(dp+i);
		printf("%d %c\n ",*(dp+i),*(ma+j));
	}*/
//	printf("%c",dp);
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
	printf("\n6: %s  %d\n",res1,count);
}
