#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at any index
 * @h: head pointer
 * @idx: index of the node
 * @n: data to be inserted
 * Return: new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *cur_node;
	unsigned int i;

	if (h == NULL)
		return (NULL);

	new_n = malloc(sizeof(dlistint_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->prev = NULL;
	new_n->next = NULL;

	if (idx == 0)
	{
		if (*h)
		{
			new_n->next = *h;
			(*h)->prev = new_n;
		}
		*h = new_n;
		return (new_n);
	}

	cur_node = *h;
	for (i = 0; i < idx - 1 && cur_node != NULL; i++)
		cur_node = cur_node->next;

	new_n->next = cur_node->next;
	if (cur_node->next)
		cur_node->next->prev = new_n;
	cur_node->next = new_n;
	new_n->prev = cur_node;

	return (new_n);
}
