#include "main.h"
/**
 * print_alphabet_x10 - Funtion to print letters 10 times
 *
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int i;
	char j;

	i = 0;

	while (i <= 10)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}
