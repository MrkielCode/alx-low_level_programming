#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add new node at the end of
 * the linked list
 * @head: head of the linked list
 * @n: node to be added
 * Return: NULL or New Node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	temp = *head;

	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_node;

	return (new_node);
}
