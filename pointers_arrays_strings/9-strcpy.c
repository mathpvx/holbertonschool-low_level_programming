#include "main.h"

/**
 * _strcpy - copies and paste a string
 *
 * @dest: point the buffer the string is going to be paste to
 *
 * @src: the string that is copied
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
		while (src[len] != '\0')
		{
			len++;
		}
		for (i = 0; i < len; i++)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';
		return (dest);
}
