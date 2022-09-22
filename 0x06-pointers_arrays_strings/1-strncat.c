#include "main.h"

/**
 * _strncat - Function that concatenates two strings
 * @dest: the string to be appended
 * @src: the string to appends
 * @n: number of bytes
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, l;

	for (l = 0; dest[l] != '\0'; l++)
		;
	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[l + i] = src[i];
	dest[l + i] = '\0';
	return (dest);
}
