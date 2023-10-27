#include "main.h"

/**
 * _strncat - concatonates src with dest with a max nbrs n
 *
 * @dest: 1st string
 *
 * @src: 2nd string
 *
 * @n: max nbrs
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
