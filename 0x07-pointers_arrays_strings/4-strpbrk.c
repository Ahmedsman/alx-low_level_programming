#include "main.h"

/**
 * _strpbrk - function searches a string for any set of bytes.
 * @s: string
 * @accept: bytes to be searched
 *
 * Return: s otherwise 0
 */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
