/*
 * main.c
 *
 *  Created on: Nov 7, 2023
 *      Author: Mostafa
 */

#include "stdio.h"


int main () {
	char c;

	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);
	if ((c>=65&&c<=90)||((c>=97)&&(c<=122)))
	{
		printf("%c is an alphabet ",c);
	}

	else
	{
		printf("%c is not an alphabet ",c);
	}
	return 0;
}



