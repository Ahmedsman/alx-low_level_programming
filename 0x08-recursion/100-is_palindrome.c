#include "main.h"

/**
 * _strlen_recursion - function return length of a string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * palcheck - checker function
 * @x: iteration
 * @y: length of s
 * @s: string
 * Return: 1 otherwise 0.
 */

int palcheck(int x, int y, char *s)
{
	if (x >= y)
		return (1);
	if (*(s + x) != *(s + y - x))
		return (0);
	return (palcheck(x + 1, y, s));
}

/**
 * is_palindrome - function returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Return: 1 otherwise 0.
 */

int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	return (palcheck(0, i - 1, s));
}

