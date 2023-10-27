#include "main.h"

/**
 * _strncpy - copies the string src to dest buffer
 *
 * @dest: buffer
 *
 * @src: string
 *
 * @n: max nbrs from src that is copied and paste
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
