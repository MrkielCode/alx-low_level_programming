#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_get - function to get values from associated key
 * @ht: hash table to add data to
 * @key: key to be retrived
 * Return: NULL or Values
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *track;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	track = ht->array[index];

	while (track != NULL)
	{
		if (strcmp(track->key, key) == 0)
			return (track->value);

		track = track->next;
	}

	return (NULL);
}
