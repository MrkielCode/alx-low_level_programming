#include "main.h"
/**
 * puts2 - functions to print strings
 *
 * @str: parameter to be printed
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
