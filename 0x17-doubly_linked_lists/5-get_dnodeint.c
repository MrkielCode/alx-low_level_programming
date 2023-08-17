#include "lists.h"
/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to head
 * @index: index of node
 * Return: node or index position
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *node_position = head;

	while (node_position)
	{
		if (counter == index)
			return (node_position);
		node_position = node_position->next;
		counter++;
	}

	return (NULL);
}
