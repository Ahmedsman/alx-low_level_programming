/*
*File: 3-print_alphabets.c
*Task: 3
*/

#include <studio.h>
#include <time.h>
#include <stdlib.h>

/*Printing alphabet in lowercase, and then in uppercase*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
