#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates c in s
 *
 * @s: string
 *
 * @c: char
 *
 * Return: null
 */

char *_strchr(char *s, char c)
{
	while (1)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
