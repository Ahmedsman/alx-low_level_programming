#include <stdio.h>

/**
 * main - print alphabet in lower case except q and e
 *
 * description: all code putting in main function
 * 
 * return: Always  0
 */
int main(void)
{
	char letter;
		for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
