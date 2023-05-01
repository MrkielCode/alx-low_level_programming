#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - To get index of a node
 * @head: to get list
 * @index: given index
 * Return: index or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int pos;

	temp = head;
	pos = 0;

	if (!head)
		return (NULL);

	while (temp && pos < index)
	{
		temp = temp->next;
		pos++;
	}

	return (temp);
}
