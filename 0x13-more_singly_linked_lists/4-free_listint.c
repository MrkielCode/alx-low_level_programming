#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - to free linked list
 * @head: node to be free
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}

}
