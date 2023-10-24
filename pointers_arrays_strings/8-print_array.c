#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of array
 *
 * @a: array
 *
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
		printf("%i", a[i]);
		}
		else
		{
		printf(", %i", a[i]);
		}
	}
	printf("\n");
}
