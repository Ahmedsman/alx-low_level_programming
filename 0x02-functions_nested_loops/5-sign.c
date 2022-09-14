#include "main.h"

/**
 * print_sign - Entry point
 * @n: int varaible
 * description: print 1 if n > 0, 0 if n = 0, and - if n < 0
 *
 * Return: 1 print '+', 0 print '0', otherwise -1 print '-'
 */

int print_sign(int n)
{
	if (n > 0)
		{
		_putchar('+');
		return (1);
		}
	else if (n < 0)
		{
		_putchar('-');
		return (-1);
		}

		_putchar('0');
		return (0);
}
