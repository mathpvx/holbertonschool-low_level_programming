#include "main.h"

/**
 * swap_int - swaps a and b values
 *
 * @a: variable
 *
 * @b: variable
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
