#include "hash_tables.h"
#include <stdlib.h>

/**
 * handle_collision - It create a new_node if there is
 * collision
 * @head: pointer to header
 * @key: key of the array
 * @value: value associated with key
 * Return: 0 on failure and 1 on success
 */


int handle_collision(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);

	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = *head;
	*head = new_node;

	return (1);
}

/**
 * hash_table_set - func to set item to hash table
 * @ht: hash table
 * @key: key to be save
 * @value: value associated to key
 * Return: 1 on success or 0 on failurw
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];

	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			if (temp->value ==  NULL)
				return (0);

			free(temp->value);

			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}

	if (!handle_collision(&(ht->array[index]), key, value))
		return (0);

	return (1);
}
