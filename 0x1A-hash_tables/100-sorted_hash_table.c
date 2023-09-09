#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"
/**
 * shash_table_create -- to create hash table
 * @size: size of the hash table
 * Return: return table
 */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *my_table;
	unsigned long int i;

	my_table = malloc(sizeof(shash_table_t));
	if (my_table == NULL)
		return (NULL);

	my_table->size = size;
	my_table->shead = NULL;
	my_table->stail = NULL;

	my_table->array = malloc(sizeof(shash_table_t *) * size);

	if (my_table->array == NULL)
	{
		free(my_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		my_table->array[i] = NULL;
	}

	return (my_table);
}

/**
 * handle_collision - functions create a linked list
 * if collision a exist
 * @key: key of the array
 * @value: value associated with key
 * Return: 0 on failure and 1 on success
 */

shash_node_t *handle_collision(const char *key, const char *value)
{
	shash_node_t *new_node;

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->key = strdup(key);

	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = new_node->snext = new_node->sprev = NULL;

	return (new_node);
}
/**
 * sort_list - To sort a node
 * @table: hash table to be sorted
 * @node: the noed to add
 */

void sort_list(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *temp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = node;
		return;
	}

	temp = table->shead;

	while (temp != NULL)
	{
		if (strcmp(node->key, temp->key) < 0)
		{
			node->snext = temp;
			node->sprev = temp->sprev;
			temp->sprev = node;

			if (node->sprev != NULL)
				node->sprev->snext = node;
			else
				table->shead = node;
			return;
		}
		temp = temp->snext;
	}

	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}
/**
 * shash_table_set - function to set item to hash table
 * @ht: hash table
 * @key: key to be save
 * @value: value associated to key
 * Return: 1 on success or ) on failure
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *temp, *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned const char *)key, ht->size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			if (temp->key == NULL)
				return (0);

			free(temp->value);

			temp->value = strdup(value);

			return (1);
		}

		temp = temp->next;
	}

	node = handle_collision(key, value);
	if (node == NULL)
		return (0);

	node->next = ht->array[index];
	ht->array[index] = node;

	sort_list(ht, node);

	return (1);
}

/**
 * shash_table_get - function to get values from associated key
 * @ht: hash table to get data
 * @key: key to be serached
 * Return: NULL or values
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *track;

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

/**
 * shash_table_print - To print hash table using the sorted linked list
 * @ht: table head
 */

void shash_table_print(const shash_table_t *ht)
{
	char flag = 0;

	shash_node_t *track;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");

	track = ht->shead;

	while (track != NULL)
	{
		if (flag == 1)
			printf(", ");

		printf("'%s': '%s'", track->key, track->value);
		flag = 1;
		track = track->next;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - To reverse a linked list
 * @ht: hash table
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	char flag = 0;
	shash_node_t *track;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	track = ht->stail;

	while (track != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", track->key, track->value);
		flag = 1;
		track = track->next;
	}
	printf("}\n");
}

/**
 * shash_table_delete  - To delete hash table
 * @ht: hash table
 */

void shash_table_delete(shash_table_t *ht)
{
	unsigned long int count;
	shash_node_t *track, *tmp;

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
	ht->shead = ht->stail = NULL;
	free(ht);

}
