#include "main.h"

/**
 * puts_half - prints the last half of a string
 *
 * @str: string
 */

void puts_half(char *str)
{
	int lenght = _strlen(str);

	int start = lenght / 2;

	int i;

	if (lenght % 2 == 1)
	{
		start = (lenght - 1)/2;
	}
	for (i = start; i != '\0'; i++)
	{
		_putchar(str[i]);
	}
}
