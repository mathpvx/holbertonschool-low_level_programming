#include "main.h"

/**
 * _memset - fills the first n bytes of the buffer s with b
 *
 * @s: buffer
 *
 * @b: char inputed in the n bytes buffer
 *
 * @n: number of bytes filled
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
