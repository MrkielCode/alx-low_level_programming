#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add new node at the beginning of
 * the linked list
 * @head: head of the linked list
 * @n: node to be added
 * Return: NULL or New Node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);

}
