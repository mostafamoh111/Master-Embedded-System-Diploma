/*
 * main.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Mostafa
 */
#include "stdio.h"
#include "conio.h"

void main (){

	int num1;
	do{
	printf("\n Enter an integer number you want to check: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num1);
	if (num1%2==0)
		printf("%d is even. \n",num1);
	else
		printf("%d is odd. \n",num1);

		printf("Press (y) to repeat or press any key to exit ");
	}while(getche()== 'y');
}