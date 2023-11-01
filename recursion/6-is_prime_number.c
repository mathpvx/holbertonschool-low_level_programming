#include "main.h"

int the_prime(int n, int i);

/**
 * is_prime_number - telles if n is a prime or not
 *
 * @n: number
 *
 * Return: 1 if n is a prime nbr, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (the_prime(n, n - 1));
}

/**
 * the_prime - calculates if n is a prime nbr
 *
 * @n: number
 *
 * @i: iterates
 *
 * Return: 0
 */
int the_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (the_prime(n, i - 1));
}
