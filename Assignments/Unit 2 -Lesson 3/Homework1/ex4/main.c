/*
 * main.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Mostafa
 */
#include "stdio.h"


void main (){

	float x=0,y=0;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x,&y);
	printf("result of %0.2f*%0.2f= %0.4f",x,y,x*y);

}

