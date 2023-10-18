#include <stdio.h>

/**
 * main - prints 0 to 9 with comma
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int d = '0';

	while (d <= '9')
	{
	putchar(d);
	if (d < '9')
	{
	putchar(',');
	putchar(' ');
	}
	d++;
	}

	putchar('\n');

	return (0);
}
