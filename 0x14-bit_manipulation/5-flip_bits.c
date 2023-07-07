#include "main.h"
/**
 * flip_bits - count and change number of bits
 * @n: first number to be changed
 * @m: second number to be changed
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int df;
	int i = 0;

	df = n ^ m;

	while (df > 0)
	{
		if (df & 1)
			i++;

		df >>= 1;
	}

	return (i);

}

