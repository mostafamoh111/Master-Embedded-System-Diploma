/*
 * main.c
 *
 *  Created on: Nov 7, 2023
 *      Author: Mostafa
 */

#include "stdio.h"


int main () {
	float num1;

	printf("Enter the number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num1);
	if (num1>0)
	{printf("%0.2f is positive ",num1);}
	else if (num1<0)
	{printf("%0.2f is negative ",num1);}
	else
	{printf("You entered zero ");}
	return 0;
}

