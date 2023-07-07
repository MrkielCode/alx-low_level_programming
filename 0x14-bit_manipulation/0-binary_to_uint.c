#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - To convert the binary to unisigned integer
 * @b: string pointer containing ascii code
 * Return: NULL if not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal_values = 0;
	int count = 0;

	if (b == NULL)
		return (0);

	while (b[count])
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);

		decimal_values = 2 * decimal_values + (b[count] - '0');
		count++;
	}

	return (decimal_values);
}
