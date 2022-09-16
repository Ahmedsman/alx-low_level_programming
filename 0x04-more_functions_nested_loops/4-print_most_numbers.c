#include "main.h"
/**
 * print_most_numbers - function that prints the numbers
 * description: do not print 2 & 4
 * Return: nil
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (!(i == 50 || i == 52))
			putchar(i);
	}
	_putchar('\n');
}
