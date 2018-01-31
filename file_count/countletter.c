#include"head.h"
/*char* file2buff()
{
        FILE *fp;
        char *bufff,*file,*typ;int a,c=0,i,d=0;
        bufff = malloc(255 * sizeof(char));
        file = malloc(255 * sizeof(char));
        typ = malloc(255 * sizeof(char));
        printf("Enter the location of file:");
        scanf("%s",file);
        printf("Enter the mode to be used in file");
        scanf("%s",typ);
        fp = fopen(file,typ);
        if(fp == NULL)
                printf("Error");
        fread(bufff, 255, sizeof(char), fp);
        a=strlen(bufff);
        bufff= realloc(bufff,a);
        return bufff;
}*/
void countletter(char *bufff)
{
        int c=0,d=0,i,a;
        a=strlen(bufff);
//:        bufff = malloc(255 * sizeof(char));
 //       printf("4:file data is : %s\n and len is %d\n ", bufff,a );
        for(i=0;i<a;i++)
        {
                if(bufff[i]==' '||bufff[i]=='\0'||bufff[i]=='\n'||bufff[i]=='\t')
                {
                        if(bufff[i]=='\n')
                        {
                                d++;
                        }
                        c++;
                }

        }
        printf("\nThe number of words in the file are : %d\nTotal alphabets  are :%d\nNo of lines are :%d \n", c-1,(a-c),d-1 );
//        free(*bufff);

}
/*void main()
{
        char *bufff;int a;
//        bufff = malloc(255 * sizeof(char));
	bufff=file2buff();
	a=strlen(bufff);
        printf("3:file data is : %s\n and len is %d\n ", bufff,a );
	countletter(bufff);
}*/
                                                                                                                                                     
                                                                                                                                                     
                                                                                                                                                     
                                                                                                                                                     
       
