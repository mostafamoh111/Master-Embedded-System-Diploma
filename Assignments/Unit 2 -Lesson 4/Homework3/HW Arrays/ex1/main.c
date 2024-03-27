#include "stdio.h"

void main (void)
{
float arr1[2][2],arr2[2][2],sum[2][2];
int i,j;
printf("Enter the elements of 1st matrix: \n");
for (i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("Enter a%d%d:",i+1,j+1);
        scanf("%f",&arr1[i][j]);
    }

}
printf("Enter the elements of 2nd matrix: \n");
for (i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("Enter a%d%d:",i+1,j+1);
        scanf("%f",&arr2[i][j]);
    }

}
for (i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        sum[i][j]=arr1[i][j]+arr2[i][j];
    }

}
printf("Sum Of Matrix:\n");
for (i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        printf("%.1f      ",sum[i][j]);
    }
printf("\n");
}


}




