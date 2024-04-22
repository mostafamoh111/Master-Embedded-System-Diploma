#include "stdio.h"

void main (void) 
{

    int m;
    int *ab=NULL;


//First output:
    m=29;
    printf("Address of m : 0x%p \n",&m);
    printf("Address of m : %d \n",m);   
    printf("\n");
    ab=&m;
    printf("Address of pointer ab : 0x%p \n",ab);
    printf("Content of pointer ab : %d \n",*ab);
    printf("\n");
    //Second output:
    m=34;

    printf("Address of pointer ab : 0x%p \n",ab);
    printf("Content of pointer ab : %d \n",*ab);
    printf("\n");
    //Third output:
    *ab=7;
    
    printf("Address of m : 0x%p \n",&m);
    printf("Content of m : %d \n",m);
    printf("\n");
}