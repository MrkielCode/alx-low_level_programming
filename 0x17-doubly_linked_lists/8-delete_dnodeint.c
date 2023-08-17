#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 * @head: head pointer
 * @index: index
 * Return: current index or null
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current1, *current2;

	unsigned int count = 0;

	current1 = *head;

	if (current1 != NULL)
		while (current1->prev != NULL)
			current1 = current1->prev;

	while (current1 != NULL)
	{
		if (count == index)
		{
			if (count == 0)
			{
				*head = current1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				current2->next = current1->next;

				if (current1->next != NULL)
					current1->next->prev = current2;
			}

			free(current1);
			return (1);
		}
		current2 = current1;
		current1 = current1->next;
		count++;
	}
	return (-1);
}
