#include "stdio.h"
#include "conio.h"

void main (void)
{
char str[100],charac;
int i=0,frequency=0;
printf("Enter a string: ");
gets(str);
printf("Enter a character to be find frequency:");
charac=getche();
while (str[i]!=0)
{
    if (str[i]==charac)
    {
        frequency++;
    }
 i++;
}
printf("\n frequency of %c = %d ",charac,frequency);
}




