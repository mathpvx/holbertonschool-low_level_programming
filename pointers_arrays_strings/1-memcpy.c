#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 *
 * @dest: destination buffer
 *
 * @src: source buffer
 *
 * @n: nmbr of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
