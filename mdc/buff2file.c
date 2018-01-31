#include"head.h"
void buff2file(char *res1)
{
        FILE *fp;
	unsigned char *file;
        len=strlen(res1);
	file=malloc(255);
	scanf("%s",file);
        fp=fopen(file,"w");
        if(fp==NULL)
                printf("Error");
        fwrite(res1,len,sizeof(char),fp);
	
        fclose(fp);
}

