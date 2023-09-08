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
	char flag = 0;

	hash_node_t *track;


	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

		for (counter = 0; counter < ht->size; counter++)
		{
			track = ht->array[counter];

			while (track != NULL)
			{
				if (flag == 1)
					printf(", ");

				printf("'%s': '%s'", track->key, track->value);

				flag = 1;

				track = track->next;
			}

		}
	printf("}\n");
}
