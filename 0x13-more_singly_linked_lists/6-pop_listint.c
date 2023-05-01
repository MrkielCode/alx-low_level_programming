#include <stdlib.h>
#include "lists.h"

/**
 *  pop_listint - To delete a node at beginning
 *  @head: linked list
 *  Return: List or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (head == NULL)
		return (0);

	data = (*head)->n;

	temp = *head;
	*head = (*head)->next;
	free(temp);

	return (data);
}
