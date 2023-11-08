#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - returns a pointer to allocated memory for concatonated str
 *
 * @s1: string 1
 *
 * @s2: string 2
 *
 * Return: NULL if fail, pointer str if success
 */

char *str_concat(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int i;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	str = (char *) malloc(sizeof(char) * (len1 + len2) + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0; i < len2; i++)
	{
		str[len1 + i] = s2[i];
	}
	str[len1 + len2] = '\0';

	return (str);


}
