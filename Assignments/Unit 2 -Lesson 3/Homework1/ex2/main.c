/*
 * main.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Mostafa
 */
#include "stdio.h"


void main (){

	int x=0;
	printf("Enter a integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x);
	printf("You entered: %d",x);

}