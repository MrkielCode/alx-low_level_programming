#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_print - funtion to print key and value
 * @ht: the hash table to printed
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int counter;

	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
		for (counter = 0; counter < ht->size; counter++)
		{
			hash_node_t *track = ht->array[counter];

			if (track != NULL)
			{
				if (flag == 0)
					printf(", ");

				printf("'%s': '%s'", track->key, track->value);

				flag = 0;

				track = track->next;
			}

		}
	printf("}\n");
}
