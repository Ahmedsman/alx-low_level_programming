#include "main.h"
/**
 * more_numbers - function that prints 10 times the numbers
 * decription: 0 to 14
 * Return: nil
 */
void more_numbers(void)
{
	int i, j, k, l;

	for (j = 0; j < 10, j++)
	{
		k = 0;
		l = 0;
		for (i = 48; i < 63; i++)
		{
			if (!(i > 57))
				l = i;
			else
			{
				l = i - 10;
				k = 49;
				_putcha(k);
			}
			_putchar(l);
		}
		_putchar('\n');;
	}
}
