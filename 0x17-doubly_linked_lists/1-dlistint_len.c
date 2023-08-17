#include "lists.h"
/**
 * dlistint_len - To get the length of double
 * linked list
 * @h: head pointer
 * Return: length of node
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
