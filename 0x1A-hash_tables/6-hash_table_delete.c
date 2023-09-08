#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - To delete hash table
 * @ht: hash table to be deleted
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *track, *tmp;

	if (ht == NULL || ht->array == NULL)
		return;

	for (count = 0; count < ht->size; count++)
	{
		track = ht->array[count];
		while (track != NULL)
		{
			tmp = track;
			track = track->next;

			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}

