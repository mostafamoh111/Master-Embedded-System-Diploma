#include "stdio.h"
#define PI 3.1415
#define area(radius) (PI*(radius)*(radius))

void main (void)
{   
int radius;
float area;
printf("Enter the radius: ");
scanf("%d",&radius);
printf("Area = %.2f ",area(radius));
}


