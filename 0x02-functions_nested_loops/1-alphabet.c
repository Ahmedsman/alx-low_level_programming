#include "main.h"

/**
 * main - print alphabet in lower case
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (lettter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
