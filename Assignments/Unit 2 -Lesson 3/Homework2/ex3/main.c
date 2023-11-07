/*
 * main.c
 *
 *  Created on: Nov 7, 2023
 *      Author: Mostafa
 */

#include "stdio.h"


int main () {
	float num1,num2,num3;

	printf("Enter tree numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num3);
	if (num1>=num2)
	{
		if (num1>=num3)
		{printf("Largest number = %0.2f ",num1);}
		else
		{printf("Largest number = %0.2f ",num3);}
	}
	else
	{
		if (num2>num3)
		{printf("Largest number = %0.2f ",num2);}
		else
		{printf("Largest number = %0.2f ",num3);}
	}
	return 0;
}

