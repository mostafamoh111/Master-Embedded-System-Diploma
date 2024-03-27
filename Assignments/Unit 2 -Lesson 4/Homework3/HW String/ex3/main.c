#include "stdio.h"
#include "string.h"

void main (void)
{
char str[100],temp;
/*char revstr[100];*/
int i=0,j;
printf("Enter a string    : ");
gets(str);
j=strlen(str)-1;
while(i<(strlen(str)-1)/2)
{
    temp=str[i];
    str[i]=str[j];
    str[j]=temp;
    i++;
    j--;
}
printf("Reverse string is : %s",str);

 //another way
/* for(i=0;i<strlen(str);i++)
{
    revstr[i]=str[strlen(str)-i-1];
}
printf("Reverse string is : "); 
 for(i=0;i<strlen(str);i++)
{
    printf("%c",revstr[i]);
}
*/

}