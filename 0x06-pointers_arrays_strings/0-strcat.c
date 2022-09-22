#include <main.h>

/**
 * _strcat - Function that concatenates two strings.
 * @src: the string to be appended
 * @dest: the string which src will appends to
 * 
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, l;

	for (l = 0; dest[l] != '\0'; l++)
		;
	for (i = 0; src[i] != '\0'; i++)
		dest [l + i] = src[i];
	dest[l + i] = '\0';
	return (dest);
}
