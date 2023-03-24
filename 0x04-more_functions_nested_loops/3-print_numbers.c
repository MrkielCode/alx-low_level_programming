#include "main.h"

/**
 * print_numbers - Print numbers fro 0-9
 * Return: Nothing
 */

void print_numbers(void)
{
	char count;

	for (count = '0'; count <= '9'; count++)
	{
		_putchar(count);
	}
	_putchar('\n');
}
