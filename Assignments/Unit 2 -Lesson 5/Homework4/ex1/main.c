#include "stdio.h"
int Prime_number_check(int n1);
void main (void)
{
int num1,num2,flag=0;
printf("Enter two numbers(intervals): ");
scanf("%d %d",&num1,&num2);
printf("Prime numbers between %d and %d are: ",num1,num2);
for(int i=num1+1;i<num2;i++)
{
    flag=Prime_number_check(i);
    if(flag==0)
    {
        printf("%d ",i);
    }
}
}
int Prime_number_check(int n1)
{
int flag=0;
for(int i=2;i<=n1-1;i++)
{   
    if(n1%i==0)
    {
        flag=1;
        break;
    }
}
return flag;

}


