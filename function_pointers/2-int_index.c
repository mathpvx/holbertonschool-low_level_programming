#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - check an element of an array
 * @array: array
 * @size: number of elements in the array
 * @cmp: pointer to the function that checks
 * Return: index of the first element if not 0
 * -1 if no match is found or negative size
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
