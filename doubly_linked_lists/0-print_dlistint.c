#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *list = h;
	size_t count = 0;

	while (list != NULL)
	{
		printf("%d\n", list->n);
		list = list->next;
		count++;
	}

	return (count);
}

