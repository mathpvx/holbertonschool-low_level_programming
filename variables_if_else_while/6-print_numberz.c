#include <stdio.h>

/**
 * main - prints base ten
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int bt;

	for (bt = '0'; bt < '10'; bt++)
	{
	putchar(bt);
	}
	putchar('\n');

	return (0);
}
