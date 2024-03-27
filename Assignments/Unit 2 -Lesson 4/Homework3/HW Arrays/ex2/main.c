#include "stdio.h"

void main (void) {
int num,i;
float data[100],avg,sum=0;
printf("Enter the numbers of data: ");
scanf("%d",&num);

for (i=0;i<num;i++)
{
printf("%d. Enter number: ",i+1);
scanf("%f",&data[i]);
sum+=data[i];
}
avg=sum/num;
printf("Average = %.2f ",avg);
}