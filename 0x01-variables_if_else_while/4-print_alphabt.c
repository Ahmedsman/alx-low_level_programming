#include <stdio.h>

/**
 * main - entry piont
 *
 * description: using main function
 * this programe print alphabet in lower case
 * return: Always  0
 */
int main (void)
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
