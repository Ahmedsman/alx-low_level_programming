#include "function_pointers.h"

/**
 * int_index - function searches for an integer.
 * @array: pointer to an array
 * @size: size of array
 * @cmp: pointer to function to compare values
 * Return: index of first element for the cmp
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int loc, flag = 0;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (loc = 0; loc < size; loc++)
	{
		flag = cmp(array[loc]);
		if (flag != 0)
			return (loc);
	}
	return (-1);
}
