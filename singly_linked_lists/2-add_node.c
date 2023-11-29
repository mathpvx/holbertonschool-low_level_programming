#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of the list
 * @head: double pointer to the list_t
 * @str: new string to add to the node
 * Return: the adresse of the new element, NULL if fails
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
