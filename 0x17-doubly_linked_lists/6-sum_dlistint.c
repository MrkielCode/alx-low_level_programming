#include "lists.h"
/**
 * sum_dlistint - to sum up node data
 * @head: pointer to head
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *curr_node = head;

	while (curr_node)
	{
		sum = sum + curr_node->n;
		curr_node = curr_node->next;
	}

	return (sum);

}
