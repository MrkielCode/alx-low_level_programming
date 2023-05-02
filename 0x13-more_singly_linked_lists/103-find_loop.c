#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - find number of loop
 * @head: list pointer
 * Return: NULL or List
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sl;
	listint_t *fa;

	if (!head || !head->next)
		return (NULL);

	sl = head->next;
	fa = head->next->next;

	while (fa && fa->next)
	{
		if (sl == fa)
		{
			sl = head;
			while (sl != fa)
			{
				sl = sl->next;
				fa = fa->next;
			}
			return (sl);
		}
		sl = sl->next;
		fa = fa->next->next;
	}

	return (NULL);
}
