#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function prints a name.
 * @name: the name to be printed
 * @f: pointer to function.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
