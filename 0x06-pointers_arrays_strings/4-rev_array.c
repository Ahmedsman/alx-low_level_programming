#include "main.h"

/**
 * reverse_array - function reverses the content of an array of integers.
 * @a: array
 * @n: integer
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, c, j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
		j--;
	}
}
