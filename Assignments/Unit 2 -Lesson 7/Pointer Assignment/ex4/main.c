#include "stdio.h"
#include "string.h"

int main(void) {

    int numb[15],num;
    int *ptr;

    printf("Input the number of elements to store in the array(Max 15): ");
    scanf("%d",&num);

    printf("Input %d number of elements in the array : ",num);
    for (int i=0;i<num;i++)
    {
        printf("element -%d : ",i+1 );
        scanf("%d",&numb[i]);
    }

    ptr=&(numb[(num-1)]);
    printf("The elements of array in reverse order are : \n");
    for(int i=0;i<num;i++)
    {
        printf("element -%d : %d",num-i,*ptr);
        printf("\n");
        ptr--;
    }
    return 0;
}
