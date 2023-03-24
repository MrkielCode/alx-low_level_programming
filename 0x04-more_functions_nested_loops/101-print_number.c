#include "main.h"

/**
 * print_number - Prints an integer
 * @n: integer parameter
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int m, j, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	j = m;
	count = 1;

	while (j > 9)
	{
		j /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
}
