#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - free list
 * @h: list pointer
 * Return: len
 */


size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int dif;

	listint_t *temp, *current;

	if (!h || !*h)
		return (0);

	for (current = *h; current; current = temp)
	{
		temp = current->next;
		dif = current - temp;
		if (dif > 0)
		{
			free(current);
			len++;
		}
		else
		{
			free(current);
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}

