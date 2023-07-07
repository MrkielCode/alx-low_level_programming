#include "main.h"
/**
 * set_bit - set a bit
 * @n: parameter to be set
 * @index: index of the number
 * Return: 1 or -1;
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int i = -1;
	unsigned long int mk;

	if (index > 63)
		return (i);
	if (n == NULL)
		return (i);

	mk = 1UL << index;

	*n |= mk;

	return (1);
}
