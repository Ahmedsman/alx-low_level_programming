#include "main.h"

/**
 * _pow_recursion - function returns the value of x raised to the power of y.
 * @x: 1st parameter
 * @y: 2nd parameter
 * Return: x raised to y
 */

int _pow_recursion(int x, int y)
{
	if (n == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
