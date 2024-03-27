#include "stdio.h"
struct Complex_S add(struct Complex_S n1,struct Complex_S n2);
struct Complex_S{
    float real,complex;
};
void main (void)
{   
    struct Complex_S n1,n2,sum;
    printf("For 1st complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f",&n1.real,&n1.complex);
    printf("For 2nd complex number\n");
    printf("Enter real and imaginary respectively: ");
    scanf("%f %f",&n2.real,&n2.complex);
    sum=add(n1,n2);
    printf("Sum= %.2f+%.2fi ",sum.real,sum.complex);
}


struct Complex_S add(struct Complex_S n1,struct Complex_S n2)
{   struct Complex_S sum;
    sum.real=n1.real+n2.real;
    sum.complex=n1.complex+n2.complex;
    return sum;
}