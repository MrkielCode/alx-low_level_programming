#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - to print number of length
 * @h: head linked list
 * Return: size of element
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
