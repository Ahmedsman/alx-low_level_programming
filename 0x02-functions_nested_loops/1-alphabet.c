#include "main.h"

/**
 * main - print alphabet
 * Description: a function that prints the alphabet,
 * in lowercase, followed by a new line.
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
