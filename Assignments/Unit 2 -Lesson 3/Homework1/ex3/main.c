/*
 * main.c
 *
 *  Created on: Nov 6, 2023
 *      Author: Mostafa
 */
#include "stdio.h"


void main (){

	int x=0,y=0;
	printf("Enter two integers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&x,&y);
	printf("Sum: %d",x+y);

}
