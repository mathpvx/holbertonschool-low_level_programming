#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * array_range - create an array of int from min to max
 *
 * @min: the start
 *
 * @max: the end
 *
 * Return: arr if success, NULL if fail
 */

int *array_range(int min, int max)
{
	int size, i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	size = max + 1 - min;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
