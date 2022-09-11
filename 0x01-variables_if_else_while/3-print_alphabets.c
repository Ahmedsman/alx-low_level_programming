#include <stdio.h>
#include <unistd.h>

/*
 * main - Entry point
 *Description: Printing alphabet in lowercase, and then in uppercas
 *Return: 0 - success
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
