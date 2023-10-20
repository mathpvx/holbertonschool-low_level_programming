#include "main.h"

/**
 * print_last_digit - prints a
 *
 * @n: number
 *
 * Return: a
 */

int print_last_digit(int n)
{
	int a;

	a = n % 10;

	if (n < 0)
	{
		n = -n;
	}

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');

	return (a);
}

