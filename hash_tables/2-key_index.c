#include "hash_tables.h"
/**
 * key_index - get the index where a key/value pair should be stored
 * @key: the key
 * @size: the size of the array of the hash table
 * Return: The index of the key using djb2 algorithm
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
