#include "main.h"

/**
 * prime_check - function verify if s is the sqrt of x
 * @s: parameter
 * @x: number
 * Return: 1 otherwise 0;
 */

int prime_check(int s, int x)
{
	if (s * s > x)
		return (1);
	if (x % s == 0)
		return (0);
	return (prime_check(s + 1, x));
}

/**
 * is_prime_number - returns 1 if the input integer is
 * prime number, otherwise 0
 * @n: parameter
 * Return: 1, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(2, n));
}
