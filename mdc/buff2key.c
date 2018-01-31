#include"head.h"
void buff2key(char *res1)
{
        FILE *fp;
        len=strlen(res1);
	printf("\nKey file created....\n\aKey file name-> key\n");
	printf("\n\n*******important note*******\nplease store the key file safely,without the key file you wont be able to decript the file\n\n");
        fp=fopen("key","w");
        if(fp==NULL)
                printf("Error");
        fwrite(res1,len,sizeof(char),fp);
        fclose(fp);
}

