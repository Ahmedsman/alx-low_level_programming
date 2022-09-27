#include "maain.h"

/*
 * _memset - function fills memory with a constant byte.
 * @n: bytes
 * @s: pointer
 * @b: constant
 * Return: s
 */

char _memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
