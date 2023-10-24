#include "main.h"

/**
 * print_rev - prints in reverse
 *
 * @s: the string
 */

void print_rev(char *s)
{
	int i = 0;

	for (s[i] = '\0' - 1; s[0]; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
