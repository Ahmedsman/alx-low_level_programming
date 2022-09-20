#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints n elements of an array of integers
 * description: n is the number of elements of the array to be printed
 * @a: pointer
 * @n: int
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
