#include "main.h"

/**
 * print_number - function prints an integer
 * @n: integer
 * Return: Nil
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n = -n;
		_putchar ('-');
	} else
	{
		n1 = n;
	}

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar((n1 % 10) + '0');
}
