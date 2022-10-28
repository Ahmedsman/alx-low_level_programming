#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of bit.
 * Return: 1 if it worked, othereise  -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
