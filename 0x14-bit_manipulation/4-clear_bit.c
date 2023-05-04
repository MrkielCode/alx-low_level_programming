#include "main.h"

/**
 * clear_bit - To clear value of a given bit
 * @n: pointer
 * @index: index of bit to be clear
 * Return: 1 or -1;
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
	{
		return (-1);
	}

	*n = (~(1UL << index) & *n);
	return (1);
}

