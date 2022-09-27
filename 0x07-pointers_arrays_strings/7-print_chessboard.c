#include "main.h"

/**
 * print_chessboard - function prints chessboard.
 * @a: chessboard
 */
void print_chessboard(char (*a)[8])
{
	int ch1, ch2;

	for (ch1 = 0; a[ch1][7]; ch1++)
	{
		for (ch2 = 0; ch2 < 8; ch2++)
			_putchar(a[ch1][ch2]);

		_putchar('\n');
	}
}
