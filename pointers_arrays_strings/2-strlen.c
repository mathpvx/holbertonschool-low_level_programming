#include "main.h"

/**
 * _strlen - returns the lenght of the string
 *
 * @s: the string
 *
 * Return: returns i, the lenght
 */

int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
