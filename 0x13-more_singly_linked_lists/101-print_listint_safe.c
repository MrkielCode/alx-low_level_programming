#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list
 * @head: A pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head, *temp;
	size_t count = 0;

	if (!head)
		return (98);

	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		if (current > current->next)
			current = current->next;
		else
		{
			temp = current->next;
			printf("-> [%p] %d\n", (void *)temp, temp->n);
			break;
		}
	}
	return (count);
}

