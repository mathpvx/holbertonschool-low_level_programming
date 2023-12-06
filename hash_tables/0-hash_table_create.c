#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: the size of the array
 * Return: the hash table if success, NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = 0;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ht->array[i] = (NULL);
	}

	ht->size = size;

	return (ht);
}
