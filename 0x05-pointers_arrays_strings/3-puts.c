#include <main.h>

/**
 * _puts - function prints a string
 * description: to stdout.
 * @str: pointer
 * Return: Always 0.
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
