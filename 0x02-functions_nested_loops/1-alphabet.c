#include "main.h"

/**
 * main - print alphabet
 * description: function that print alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
