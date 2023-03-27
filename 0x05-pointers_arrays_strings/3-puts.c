#include "main.h"
/**
 * _puts - functions to print strings
 *
 * @str: parameter to be printed
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
