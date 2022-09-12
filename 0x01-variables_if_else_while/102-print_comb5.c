#include <stdio.h>
#include <unistd.h>

/**
 * main - print all possible combinations of two digit numbers.
 * instruction: the number should range from 0 - 99
 *
 * Return: Always 0
 */

int main(void)
{
	int l, m, n, o;

	for (l = 48; l <= 57; l++)
	{
		for (m = 48; m <= 57; m++)
		{
			for (n = 48; n <= 57; n++)
			{
				for (o = 48; o <= 57; o++)
				{
				if (((n + o) > (l + m) && n >= l) || l < n)
				{
					putchar(l);
					putchar(m);
					putchar(' ');
					putchar(n);
					putchar(o);

					if (l + m + n + o == 227 && l == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
