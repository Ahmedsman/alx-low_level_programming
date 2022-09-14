#include "main.h"

/**
 * main - print alphabet
 * Description:a function that prina alphabet in lowercase
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
