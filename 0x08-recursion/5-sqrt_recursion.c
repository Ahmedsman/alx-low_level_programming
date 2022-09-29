#include "main.h"

/**
 * sqrt_check - function verifies if s is the square root if x
 * @s: parameter
 * @x: sqrt to find
 * Return: -1 otherwise sqrt of x
 */

int sqrt_chech(int s, int x)
{
	if (s * s == x)
		return (s);
	if (s * s > x)
		return (-1);
	return (sqrt_check(s + 1, x));
}

/**
 * _sqrt_recursion - function returns the natural square root of a number.
 * @n: parameter
 * Return: natural sqrt otherwise -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_check(1, n));
}
