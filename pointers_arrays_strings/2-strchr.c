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
		int a;

		while (1)
		{
			a = *s++;
			if (a == c)
			{
				return (s - 1);
			}
			if (a == 0)
			{
				return (NULL);
			}
		}
}
