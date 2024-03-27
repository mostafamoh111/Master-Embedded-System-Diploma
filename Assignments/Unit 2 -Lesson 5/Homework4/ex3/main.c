#include "stdio.h"
void reverse_fun(void);
void main (void)
{
printf("Enter a sentances: ");
reverse_fun();
    
}

void reverse_fun(void)
{
char c;
scanf("%c",&c);
if (c!='\n')
{
    reverse_fun();
    printf("%c",c);
}

}

