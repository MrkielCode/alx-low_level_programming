#include "main.h"
/**
 * _puts_recursion - recursive function to reverse a string
 * @s: character to be reverse
 * Return: Always s;
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
