#include "lists.h"
/**
 * list_len - returns the number of elements of the list
 * @h: pointer to the list list_t
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
