#include <stdio.h>
#include "lists.h"
/**
 * print_list - to print linked list
 * @h: head of the listi
 * Return: NULL or LIST
 */

size_t print_list(const list_t *h)
{
	size_t t = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;

		t++;
	}
	return (t);
}
