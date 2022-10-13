#include "function_pointer.h"

/**
 * array_iterator - function executes a function given
 * as a parameter on each element of an array.
 * @array: array
 * @size: size of array
 * @action: function to execute
 * Return: nil
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
