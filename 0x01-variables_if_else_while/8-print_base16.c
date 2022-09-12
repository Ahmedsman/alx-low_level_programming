#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 * instruction: only the use of putchar is allow
 *
 * Return: Always 0
 */

int main(void)
{
	int num;
	char y;
	
	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (y = 'a'; y <= 'f'; y++)
		putchar(y);

	putchar('\n');

	return (0);
}
