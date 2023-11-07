/*
 * main.c
 *
 *  Created on: Nov 7, 2023
 *      Author: Mostafa
 */

#include "stdio.h"


void main () {
	char c;

	printf("Enter an alphabet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&c);


	if(c=='a'||c=='A'||c=='e'||c=='E'||c=='u'||c=='U'||c=='o'||c=='O'||c=='i'||c=='I')
		printf("%c is a vowel ",c);
	else
		printf("%c is a consonant ",c);
}