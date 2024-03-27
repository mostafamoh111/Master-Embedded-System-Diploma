#include "stdio.h"
#include "conio.h"
int Factorial_Recursion(int num);

void main (void)
{
int num;
char c;
do
{
    do
        {
        printf("Enter a positive integer: ");
        scanf("%d",&num);
        if (num<0)
        {
            printf("Error ---> ");
        }
        }while(num<0);

    printf("Factorial of %d = %d\n",num,Factorial_Recursion(num));
    printf("Press y to repeat or any key to exit ^_^ : ");
    c=getche();
    if (c=='y')
    {printf("\n");}
}while(c=='y');
}
int Factorial_Recursion(int num)
{   int ret_num;
    if (num==0 || num==1)
    {
        ret_num=1;
    }
    else 
    {
        ret_num=num*Factorial_Recursion(num-1);
    }
    return ret_num;
}


