#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints info about dog
 * @d: pointer to the variable with dog datatype
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
