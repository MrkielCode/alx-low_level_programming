#include "lists.h"

/**
 * print_dlistint - to print double linked list
 * @h: pointer to header
 * Return: number of node
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t  counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
