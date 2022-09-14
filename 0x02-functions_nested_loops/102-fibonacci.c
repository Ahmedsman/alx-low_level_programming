#include <stdio.h>

/**
 * main - print the furst 50 number
 *
 * Return: success
 */

int main(void)
{
	int i = 0;
	long j = 1, c = 2;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", j);
		else if (i == 1)
			printf(", %ld", c);
		else
		{
			c += j;
			j = c - j;
			printf(", %ld", c);
		}
		++i;
	}
	printf("\n");
	return (0);
}
