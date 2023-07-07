#include "main.h"
/**
 * set_bit - set a bit
 * @n: parameter to be set
 * @index: index of the number
 * Return: 1 or -1;
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mk;

	if (index > 63)
		return (-1);
	if (n == NULL)
		return (-1);

	mk = 1UL << index;

	*n |= mk;

	return (1);
}
