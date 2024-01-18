#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of int using LSA
 * @array: the array to search a value in
 * @size: the size of the array
 * @value: the value to search
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array [%ld] = [%d]",i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
