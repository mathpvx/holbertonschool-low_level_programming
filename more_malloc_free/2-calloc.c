#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for a number of elements of a datatype size
 *
 * @nmemb: number of elements
 *
 * @size: of the datatype
 *
 * Return: NULL if fail, ptr if success
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int tsize;
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	tsize = nmemb * size;

	ptr = malloc(tsize);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < tsize; i++)
	{
		((char *)ptr)[i] = 0;
	}

	return (ptr);
}
