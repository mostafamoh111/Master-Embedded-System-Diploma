#include "stdio.h"
int power_calc(int number,int power);
void main (void)
{
int base,power,result;
printf("Enter base number: ");
scanf("%d",&base);

     printf("Please Enter power number(positive integer): ");
     scanf("%d",&power);
    while(power<0){

     if(power<0)
    
    {printf("Wrong, Please Enter power number(positive integer): ");
     scanf("%d",&power);
     }}s


if (power==0)
{
    result=1;
}
else
{
result=power_calc(base,power);
}
printf("%d^%d = %d",base,power,result);


    
}
int power_calc(int number,int power)
{   
    if (power>1)
    {
    return number*power_calc(number,power-1);
    }
}


