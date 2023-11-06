#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array of char, and initializes it with a specific char
 *
 * @size: size of the string
 *
 * @c: char
 *
 * Return: NULL if size 0 or if fails, a pointer to the array if success.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = (char *) malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
