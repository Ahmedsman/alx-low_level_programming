#include <stdio.h>

/**
 * main - print all possible combination of single number
 * instruction: only putchar can be used for max 4
 *
 * return: always 0
 */

int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
