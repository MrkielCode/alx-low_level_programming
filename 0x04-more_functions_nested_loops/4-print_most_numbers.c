#include "main.h"

/**
 * print_most_numbers - Print all digits except 2 and 4
 * Return: Nothing
 */

void print_most_numbers(void)
{
	char count;

	for (count = '0'; count <= '9'; count++)
	{
		if (count == '2' || count == '4')
			continue;
		_putchar(count);
	}
	_putchar('\n');
}
