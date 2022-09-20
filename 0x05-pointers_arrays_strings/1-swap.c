#include <stdio.h>
/**
 * swap_int - function that swaps the values of two integers.
 * description: swaps a and b
 * @a: pointer a
 * @b: pointer b
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}

