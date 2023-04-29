#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - To print linked list
 * @h: head pointer of the linked list
 * Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
