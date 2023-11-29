#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: list list_t to free
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
