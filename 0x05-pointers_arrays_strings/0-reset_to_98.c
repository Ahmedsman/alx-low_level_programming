#include <stdio.h>
/**
 * reset_to_98 - function that takes a pointer to an int as parameter
 * description: updates the value it points to to 98.
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("adress of 'n': %p\n", &n);
	printf("value of 'p': %p\n", p);

	return (0);
}

