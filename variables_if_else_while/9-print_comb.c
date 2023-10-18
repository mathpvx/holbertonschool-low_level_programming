#include <stdio.h>

/**
 * main - prints 0 to 9 with comma
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int d;

	for (d = '0'; d < '9'; d++)
	{
	putchar(' ');
	putchar(d);
	putchar(',');
	}
	putchar('\n');

	return (0);
}
