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
	int i = -1;
	unsigned int maximum_index = 63;


	if (index > maximum_index)
		return (i);

	mk = 1UL << index;

	*n |= mk;

	return (1);
}
