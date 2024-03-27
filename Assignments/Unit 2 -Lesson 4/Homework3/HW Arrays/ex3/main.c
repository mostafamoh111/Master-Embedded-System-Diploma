#include "stdio.h"

void main (void) {
int row,column,i,j;
int matrix[100][100],T_matrix[100][100];
printf("Enter rows and column: ");
scanf("%d %d",&row,&column);
printf("Enter elements of matrix:\n");
for (i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        printf("Enter element a%d%d: ",i+1,j+1);
        scanf("%d",&matrix[i][j]);
    }
}
printf("Entered Matrix:\n");
for (i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        printf("%d  ",matrix[i][j]);
    }
printf("\n");
}
for (i=0;i<row;i++)
{
    for(j=0;j<column;j++)
    {
        T_matrix[j][i]=matrix[i][j];
    }

}

printf("\n");
printf("Transpose of Matrix:\n");

for (i=0;i<column;i++)
{
    for(j=0;j<row;j++)
    {
        printf("%d  ",T_matrix[i][j]);
    }
printf("\n");
}

}