#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 *
 */

void *malloc_checked(unsigned int b)
{
	void *alloc = 0;

	alloc = malloc(b);

	if (alloc == NULL)
	{
		exit (98);
	}

	return (alloc);
}
