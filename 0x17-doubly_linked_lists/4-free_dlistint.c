#include "lists.h"
/**
 * free_dlistint - to free linked list
 * @head: pointer to header
 * Return: nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *copy_head;

	while (head)
	{
		copy_head = head;
		head = head->next;
		free(copy_head);
	}
}
