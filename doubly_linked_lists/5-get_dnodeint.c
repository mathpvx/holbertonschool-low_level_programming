#include "lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of the list
 * @head: pointer to the head of the list
 * @index: number that corresponds to nth node to return
 * Return: pointer to the nth node, NULL if fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}

