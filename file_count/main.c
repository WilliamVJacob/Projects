#include"head.h"
void main()
{
    char *bufff;int a;
        bufff = malloc(255 * sizeof(char));
        bufff=file2buff();
        a=strlen(bufff);
//        printf("3:file data is : %s\n and len is %d\n ", bufff,a );
        countletter(bufff);
	
}
