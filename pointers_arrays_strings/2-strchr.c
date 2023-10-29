#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates c in s
 *
 * @s: string
 *
 * @c: char 'l'
 *
 * Return: null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
