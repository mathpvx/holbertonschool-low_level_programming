#include "main.h"

/**
 * print_last_digit - makes sense itself
 *
 * @n: number
 *
 * @a: last digit
 *
 * Return: a
 */

int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}

	a = n % 10;

	_putchar('0' + a);

	return (a);
}

