#include <stdio.h>
/**
 *  binary_to_uint - convert binary to integer
 *  @b: string argument
 *  Return: NULL or B
 */

unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int decimal = 0;

	count = 0;

	if (!b)
		return (0);

	while (b[count])
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		decimal = 2 * decimal + (b[count] - '0');
		count++;
	}

	return (decimal);

}
