#include "stdio.h"

void main (void) 
{

char alpha[27];
int i;
char *ptr=alpha;
    
    for (i=0;i<26;i++)
    {
        *ptr=i+'A';
        printf("%c  ",*ptr);
        ptr++;

    }


}