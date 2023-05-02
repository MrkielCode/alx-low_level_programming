#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - To reverse a linked list
 * @head: linked list pointer
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	for (; *head; *head = next)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
	}

	*head = prev;
	return (*head);

}
