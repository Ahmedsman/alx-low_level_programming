#include <stdio.h>

/**
 * main - print the lowercase alphabet in reverse.
 * instruction: only putchar function can be adooted
 *
 * Return: Always (0)
 */

int main(void)
{
	char lowalpha;

	for (lowalpha = 'z'; lowalpha >= 'a'; lowalpha--)
		putchar(lowalpha);

	putchar('\n');

	return (0);
}
