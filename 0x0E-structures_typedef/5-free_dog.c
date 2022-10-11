#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - function frees dog
 * @d: pointer to dog struct
 * Return: nothing
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
