#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - to add node list
 * @str: node argument
 * @head: head of the NULL
 * Return: NULL or Node
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new_str = malloc(sizeof(list_t));

	if (new_str == NULL)
		return (NULL);

	len = strlen(str);
	new_str->str = strdup(str);
	new_str->len = len;
	new_str->next = (*head);

	(*head) = new_str;
	return (*head);
}
