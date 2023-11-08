#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copies the string
 *
 * @str: string that is duplicated
 *
 * Return: pointer to the copied string if Success, NULL if fail
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length;

	i = 0;
	length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	dup = malloc(sizeof(char) * (length + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[i] = str[i]) != '\0')
		i++;

	return (dup);
}
