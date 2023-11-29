#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in a list
 * @h: pointer to the pointer of the head of the linked list
 * @idx: index where the new node should be added (starting from 0)
 * @n: value to be stored in the new node
 * Return: the address of the new node, NULL if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head = *h;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	for (i = 0; i < idx - 1 && head != NULL; i++)
		head = head->next;
	if (i != idx - 1)
	{
		free(new);
		return (NULL);
	}
	new->next = head->next;
	new->prev = head;
	if (head->next != NULL)
		head->next->prev = new;
	head->next = new;
	return (new);
}
