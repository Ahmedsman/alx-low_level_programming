#include "main.h"

/**
 * puts2 - function prints every character of a string
 * description: starting with the first character
 * @str: string refrence
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
