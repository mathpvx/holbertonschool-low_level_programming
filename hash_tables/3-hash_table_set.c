#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: the key
 * @value: the value
 * Return: 1 if succeeds, 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newnode, *tmp;
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] == NULL)
	{
		newnode = malloc(sizeof(hash_node_t));
		if (newnode == NULL)
			return (0);
		newnode->key = strdup(key);
		newnode->value = strdup(value);
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	else
	{
		tmp = ht->array[index];
		while (tmp)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				if (tmp->value == NULL)
				{
					free(tmp->key);
					return (0);
				}
				return (1);
			}
			tmp = tmp->next;
		}
	}
	return (1);
}
