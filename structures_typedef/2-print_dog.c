#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints info about dog
 * @d: pointer to the variable with dog datatype
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
