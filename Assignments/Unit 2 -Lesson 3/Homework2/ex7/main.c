/*
 * main.c
 *
 *  Created on: Nov 7, 2023
 *      Author: Mostafa
 */

#include "stdio.h"


int main () {
	int n=0,i=0,sum=1;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	if  (n>0)
	{
	for(i=n;i>0;i--)
	{
		sum*=i;
	}
	printf("Factorial = %d",sum);
	}
	else if (n=0)
	{
	printf("Factorial of zero = 1");
	}
	else 
	{
		printf("Error!!!Factorial of negative number doesn't exit");
		
	}
	return 0;
}


