#include"head.h"
char* file2key()
{
        FILE *fp;
        char *bufff,*file,*typ;int a,c=0,i,d=0;
        bufff = malloc(255 * sizeof(char));
        file = malloc(255 * sizeof(char));
        typ = malloc(255 * sizeof(char));
 //       scanf("%s",file);
        fp = fopen("key","r");
        if(fp == NULL)
                printf("Error");
        fread(bufff, 255, sizeof(char), fp);
        a=strlen(bufff);
        bufff= realloc(bufff,a);
       // printf("file data is : %s\n and len is %d\n ", bufff,a );
        fclose(fp);
        return bufff;
}

