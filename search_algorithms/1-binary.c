#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted arr using BSA
 * @array: the array to search the value in
 * @size: the size of the array
 * @value: the value to search
 * Return: the index of the value if match, -1 if no match
 */
int binary_search(int *array, size_t size, int value)
{
	int i, start, end, mid;

	start = 0;
	end = size - 1;

	if (!array)
		return (-1);

	while (start <= end)
	{
		for (i = start; i <= end; i++)
		{
			mid = start + (end - start) / 2;
			printf("Searching in array:");

			for (i = start; i <= end; i++)
			{
				if (i < end)
					printf(" %d,", array[i]);
				if (i == end)
					printf(" %d\n", array[i]);
			}

			if (value == array[mid])
			{
				return (mid);
			}

			if (value < array[mid])
			{
				end = mid - 1;
			}

			else
			{
				start = mid + 1;
			}
		}
	}
	return (-1);
}
