#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert node at nth position
 * @head: list pointer
 * @idx: index
 * @n: new node data
 * Return: NULL or list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *temp;
	listint_t *new_node;

	count = 1;
	temp = *head;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (count < idx)
	{
		temp = temp->next;
		count++;
	}
	if (idx)
	{
		new_node->next = temp->next;
		temp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
