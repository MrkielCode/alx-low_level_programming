#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint_safe - prints a linked list
 * @head: pointer to linked list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t counter = 0;

	if (!head)
		exit(98);

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		counter++;
		current = head;
		head = head->next;

		if (current <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
	}
	return (counter);
}

