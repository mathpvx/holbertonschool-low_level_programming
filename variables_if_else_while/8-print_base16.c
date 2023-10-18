#include <stdio.h>

/**
 * main - prints numbers of base 16
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	char l;

	for (n = 0; n <= 9; n++)
	{
	putchar(n);
	}

	for (l = 'a'; l <= 'f'; l++)
	{
	putchar(l);
	}

	putchar('\n');

	return (0);
}
