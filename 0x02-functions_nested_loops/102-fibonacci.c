#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers
 *
 * Return: successèé
 */

int main(void)
{
	int i, z = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (1 % 5 == 0))
		{
			z += i;
		}

		i++;
	}
	printf("%d\n", z);
	return (0);
}
