#include <stdio.h>
#include "lists.h"
/**
 * list_len - to print check length of the list
 * @h: linked list head
 * Return: NULL or Lenght
 */

size_t list_len(const list_t *h)
{
	size_t t = 0;

	while (h)
	{
		h = h->next;
		t = t + 1;
	}

	return (t);
}
