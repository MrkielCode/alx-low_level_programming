#include <limits.h>
#include "main.h"

/**
 * get_bit - To return bit value at given index
 * @n: number
 * @index: indext of bit
 * Return: bit value
 */

int get_bit(unsigned long n, unsigned int index)
{
	unsigned long bit_value;

	if (index >= sizeof(unsigned long) * CHAR_BIT)
		return (-1);
	bit_value = 1UL << index;

	return ((n & bit_value) != 0);
}
