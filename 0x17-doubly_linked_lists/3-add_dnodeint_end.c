#include "lists.h"

/**
 * add_dnodeint_end - add node at end
 * @head: pointer to the head
 * @n: data to be add
 * Return: NULL or new node
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n, *tp;

	if (!head)
		return (NULL);

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}

	tp = *head;
	while (tp->next)
		tp = tp->next;

	tp->next = new_n;
	new_n->prev = tp;
	return (new_n);
}
