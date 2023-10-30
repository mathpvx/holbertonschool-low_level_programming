#include "main.h"

/**
 * _strlen_recursion - returns the lenght of the string
 *
 * @s: the string
 *
 * Return: 0 if reaches the end of the string, 1 if not
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
