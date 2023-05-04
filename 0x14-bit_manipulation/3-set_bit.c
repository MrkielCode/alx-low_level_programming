#include <limits.h>
#include "main.h"

/**
 * set_bit - To set a value of a bit
 * @n: number
 * @index: given index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long) * CHAR_BIT)
		return (-1);

	*n |= (1UL << index);
	return (1);
}
