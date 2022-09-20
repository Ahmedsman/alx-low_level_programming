#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 * description: include the terminating null byte (\0)
 * @src: char
 * @dest: pointer
 * Return: point to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}

