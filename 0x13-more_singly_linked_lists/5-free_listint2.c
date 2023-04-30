#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 -to free linked list
 * @head: list to be freed
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = (*head)->next;
		free(head);
		*head = tmp;
	}
	*head = NULL;
}
