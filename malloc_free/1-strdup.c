#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new allocated space in memory
 *
 * @str: string
 *
 * Return: NULL if no allocated memory, dup if prgrm exe correctly
 */

char *_strdup(char *str)
{
	int length, i;
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length] != '\0'; length++)

	dup = (char *) malloc(length * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length; i++)
	{
		dup[i] = str[i];
	}

	return (dup);
}
