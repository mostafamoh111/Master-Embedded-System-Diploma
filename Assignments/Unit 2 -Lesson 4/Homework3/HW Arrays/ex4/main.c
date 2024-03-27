#include "stdio.h"

void main (void) {
int num,i,num_to_change,location;
int arr[100];

printf("Enter no of elements: ");
scanf("%d",&num);

for (i=0;i<num;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the element to be inserted:  ");
scanf("%d",&num_to_change);
printf("Enter the location:  ");
scanf("%d",&location);
for (i=num;i>=0;i--)
{
    if (i>=location-1)
{       arr[i+1]=arr[i];
}
    else if (i<location-1)
    {
        arr[i]=arr[i];
    }
}
arr[location-1]=num_to_change;
for (i=0;i<num+1;i++)
{
printf("%d  ",arr[i]);
}

}