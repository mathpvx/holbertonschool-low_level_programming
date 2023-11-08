#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - allocates memory with malloc f
 *
 * @b: the parameter to allocate memory
 *
 * Return: alloc, exit 98 if fail
 */

void *malloc_checked(unsigned int b)
{
	void *alloc = 0;

	alloc = malloc(b);

	if (alloc == NULL)
	{
		exit(98);
	}

	return (alloc);
}
