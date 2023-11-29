#include "lists.h"
#include <string.h>
/**
 * add_node - adds a new node at the beginning of the list
 * @head: double pointer to the list_t
 * @n: integer data
 * Return: the adresse of the new element, NULL if fails
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
