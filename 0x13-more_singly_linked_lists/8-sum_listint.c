#include <stdlib.h>
#include "lists.h"
/**
 * getlength - get the length of list
 * @head: list pointer
 * Return: 0 or SUM
 */


int getlength(listint_t *head)
{
	int counter = 0;
	listint_t *temp;

	temp = head;

	while (temp != 0)
	{
		counter++;
		temp = temp->next;
	}

	return (counter);
}

/**
 * sum_listint - add the node data
 * @head: head pointer
 * Return: sum or 0
 */

int sum_listint(listint_t *head)
{
	int counter, sum, len;
	listint_t *temp;

	temp = head;
	counter = 0;
	sum = 0;
	len = getlength(head);

	if (head == NULL)
		return (0);

	while (temp && counter < len)
	{
		sum = sum + temp->n;
		temp = temp->next;
		counter++;
	}

	return (sum);
}
