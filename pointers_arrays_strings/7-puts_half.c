#include "main.h"

/**
 * puts_half - prints the last half of a string
 *
 * @str: string
 */

int _strlen(char *s);

void puts_half(char *str)
{
	int length = _strlen(str);

	int start = length / 2;

	int i;

	if (length % 2 == 1)
	{
		start = (length + 1) / 2;
	}
	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
