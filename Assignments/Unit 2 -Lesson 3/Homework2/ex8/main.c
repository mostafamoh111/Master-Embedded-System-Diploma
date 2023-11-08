/*
 * main.c
 *
 *  Created on: Nov 7, 2023
 *      Author: Mostafa
 */

#include "stdio.h"


int main () {
	char c=0;
	float num1=0,num2=0,sum=0;

	printf("Enter operator either + or - or * or / : ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	printf("Enter two operands : ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);

	switch (c)
	{
	case '+':
		sum=num1+num2;
		break;
	case '-':
		sum=num1-num2;
		break;
	case '*':
	sum=num1*num2;
		break;
		case '/':
		sum=num1/num2;
		break;
	}
	printf("%0.2f %c %0.2f = %0.2f",num1,c,num2,sum);
	return 0;
}

