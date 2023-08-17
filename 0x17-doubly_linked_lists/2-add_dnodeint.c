#include "lists.h"

/**
 * add_dnodeint - to add node at the begining
 * @head: head pointer
 * @n: data to be added
 * Return: NULL or POinter
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_n;

	new_n->next = *head;
	*head = new_n;

	return (new_n);

}
