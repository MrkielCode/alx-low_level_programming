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
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
