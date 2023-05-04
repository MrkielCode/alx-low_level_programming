#include "main.h"
/**
 * print_binary - print binary equivalent
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	int m, count = 0;
	unsigned long int curr;

	m = 63;
	while (m  >= 0)
	{
		curr = n >> m;
		if (curr & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
		m--;
	}
	if (!count)
		_putchar('0');
}
