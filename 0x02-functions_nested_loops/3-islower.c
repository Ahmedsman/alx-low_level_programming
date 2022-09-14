#include "main.h"

/**
 * _islower - Entry point
 *  Description : print function that checks for lowercase character.
 *
 *  Return: 1 if true. 0 if false.
 */

int _islower(int c)
{
	int x = 'a';

	for (x = 'a'; x <= 'z'; x++)
	{
		/* refer int c*/
		if (c == 1)
		{
			return (1);
		}
	}
	return (0);
}

