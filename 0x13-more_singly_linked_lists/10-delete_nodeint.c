#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index;
 * @head: node pointer
 * @index: nth position a node to be deleted
 * Return: 1 or -1;
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp, *next_node;

	i = 1;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	temp = *head;

	while (i < index - 1)
	{
		if (!temp || !temp->next)
			return (-1);
		temp = temp->next;
		i++;
	}

	next_node = temp->next;
	temp->next = next_node->next;
	free(next_node);

	return (1);
}
