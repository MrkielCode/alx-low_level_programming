#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
	unsigned long int i, n;

	i = 3;
	n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n = n / i;
	}
	printf("%lu\n", n);
	return (0);
}
