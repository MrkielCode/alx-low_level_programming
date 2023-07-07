#include "main.h"
/**
 * get_bit - get the index of bit
 * @n: parameter to be search
 * @index: position of the bit
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mk;
	int bitvalues;

	if (index > 63)
		return (-1);

	mk = 1UL << index;
	bitvalues(n & mk) != 0;

	return (bitvalues);

}
