#include"head.h"

int leng,len;
char* file2buff()
{
        FILE *fp;
        char *bufff,*file,*typ;int a,c=0,i,d=0;
        bufff = malloc(255 * sizeof(char));
        file = malloc(255 * sizeof(char));
        typ = malloc(255 * sizeof(char));
        printf("Enter the location of file:");
        scanf("%s",file);
//        printf("Enter the mode to be used in file");
  //      scanf("%s",typ);
        fp = fopen(file,"r");
        if(fp == NULL)
                printf("Error");
        fread(bufff, 255, sizeof(char), fp);
        a=strlen(bufff);
        bufff= realloc(bufff,a);
        printf("file data is : %s\n and len is %d\n ", bufff,a );
	fclose(fp);
        return bufff;
}
void buff2file(char *res1)
{
	FILE *fp;
	len=strlen(res1);
	fp=fopen("out","w");
	if(fp==NULL)
		printf("Error");
	fwrite(res1,len,sizeof(char),fp);
	fclose(fp);
}




char* master_array(char *buff)
{
	int i,j,k=0,c=0,h=1;
	unsigned char *ma;
	ma=malloc(255);
	len=strlen(buff);
//        printf("1: %s 2: %d\n3:",buff,len);
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
  //                      printf("%c",*(buff+i));
                        k++;
                }
                c=0;
        }
    //    printf("\n4:%s",ma);
        leng=strlen(ma);
//     for(i=0;pow(2,i)<leng;i++);
        for(i=0;h<leng;i++)
        {
                h=2*h;
        }
	h=i;
    //    printf("\ncode:%d %d %d",len,leng,h);
	return ma;
	
}
char* fourbitcomp(char *buff, char *ma)
{
	unsigned char *res;res=malloc(255);
	int i,j,k=0; unsigned char a,b;
        len=strlen(buff);
	leng=strlen(ma);
        printf("1: %s 2: %d\n",buff,len);
        printf("3: %s 4: %d\n",ma,leng);
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
char* fourbitdecomp(char *res,char *ma )
{
	unsigned char *dp,*res1;unsigned char a,b;
	int count=strlen(res);
	leng=strlen(ma);
	int i,k,j;
        printf("3: %s 4: %d\n",ma,leng);
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
        printf("\n6: %s  %d\n",res1,count);
	return res1;
}




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
