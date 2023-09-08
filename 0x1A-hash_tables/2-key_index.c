#include "hash_tables.h"

/**
 * key_index - to get the index of the key
 * @size: size of the array
 * @key: the key value
 * Return: null or index of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	if (key == NULL || size == 0)
		return (0);

	hash_val = hash_djb2(key);

	return (hash_val % size);
}
