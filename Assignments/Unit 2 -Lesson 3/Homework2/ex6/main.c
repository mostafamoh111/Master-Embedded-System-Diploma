/*
 * main.c
 *
 *  Created on: Nov 7, 2023
 *      Author: Mostafa
 */

#include "stdio.h"


int main () {
	int n=0,i=0,sum=0;

	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	for(i;i<=n;i++)
	{
		sum+=i;
	}
	printf("Sum = %d",sum);
	return 0;
}


