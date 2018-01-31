#include"head.h"
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
    //    scanf("%s",typ);
        fp = fopen(file,"r");
        if(fp == NULL)
        	printf("Error");
 	fread(bufff, 255, sizeof(char), fp);
        a=strlen(bufff);
        bufff= realloc(bufff,a);
  //      printf("file data is : %s\n and len is %d\n ", bufff,a );
	return bufff;
}
