#include "stdio.h"

void main (void) {
int num,i,num_to_be_searched,location;
int arr[100];

printf("Enter no of elements: ");
scanf("%d",&num);

for (i=0;i<num;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the element to be searched:  ");
scanf("%d",&num_to_be_searched);


for (i=0;i<num;i++)
{
    if(arr[i]==num_to_be_searched)
    {
        location=i+1;
    }
}
printf("Number found at the location = %d",location);

}