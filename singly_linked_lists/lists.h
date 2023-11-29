#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/*structure*/
typedef struct list_t
{
	char *str;
	unsigned int len;
	struct list_t *next;
} list_t;
/*prototypes*/
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
#endif
