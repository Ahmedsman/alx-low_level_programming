#include "main.h"

/**
 * _islower - Entry point
 *  Description : print function that checks for lowercase character.
 *  the integer value it received
 *
 *  Return: 1 if true. 0 if false.
 */

int _islower(int c)
{
	int x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		if (c == x)
		{
			return (1);
		}
	}
	return (0);
}

