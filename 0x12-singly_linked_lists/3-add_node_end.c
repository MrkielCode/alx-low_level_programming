#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - to add node at the end
 * @head: node head
 * @str: node string data
 * Return: NULL or Node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;

	list_t *new_str;
	list_t *linked_list;

	new_str = malloc(sizeof(list_t));
	if (new_str == NULL)
		return (NULL);

	len = strlen(str);

	new_str->str = strdup(str);
	new_str->len = len;
	new_str->next = NULL;

	if (*head == NULL)
	{
		*head = new_str;
		return (new_str);
	}

	linked_list = *head;
	while (linked_list->next != NULL)
		linked_list = linked_list->next;

	linked_list->next = new_str;

	return (new_str);
}
