#include "stdio.h"
#include "string.h"

int main(void)
 {
    char string[100];
    int i=0;
    char *ptr=NULL;
    printf("Input a string : ");
    gets(string);
    ptr=&(string[strlen(string)]);

    printf("Reverse of the string is :");

    for(i=strlen(string);i>=0;i--)
    {
        printf("%c",*ptr);
        ptr--;

    }
    return 0;
 }

