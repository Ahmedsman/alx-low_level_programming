#include <stdio.h>

/**
 * main - print all possible combination of three digit
 * instruction: the three digit must be different
 *
 * Return: Always 0
 */

int main(void)
{
	int a, b, c;

	for (a = '0'; <= '9'; a++)
	{
		for (b = '0'; <= '9'; b++)
		{
			for (c = '0'; <= '9'; c++)
			{
				if (a < b && b < c)
				{
					putchar(a);
					putchar(b);
					putchar(c);
					
					if (a != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
