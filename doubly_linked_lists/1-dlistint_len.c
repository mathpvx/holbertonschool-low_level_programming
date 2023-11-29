#include "lists.h"
/**
 * dlistint_len - returns the number of elements of the list
 * @h: pointer to the list list_t
 * Return: number of elements in h
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
