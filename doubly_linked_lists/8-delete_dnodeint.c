#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at a given index in a list
 * @head: pointer to the pointer of the head of the list
 * @index: index of the node to delete
 * Return: 1 if succeeds, -1 if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;

	if (index == 0)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(node);
		return (1);
	}

	for (i = 0; i < index && node != NULL; i++)
	{
		node = node->next;
	}

	if (node == NULL)
		return (-1);

	temp = node->prev;
	temp->next = node->next;

	if (node->next != NULL)
		node->next->prev = temp;

	free(node);

	return (1);
}
