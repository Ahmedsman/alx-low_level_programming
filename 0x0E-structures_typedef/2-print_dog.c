#include <stdio.h>
#include "dog.h"
/**
 * print_dog - function prints a struct dog
 * @d: pointer to dog to be  printed
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	/*declare nil variable for NULL value */
	char *nil = "(nil)";

	/*check if d is not NULL */
	if (d == NULL)
		return;
	/* printing value if they exist otherwise nil */
	printf("Name: %s\n", (d->name) ? d->name : nil);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner) ? d->owner : nil);
}
