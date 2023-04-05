#include "main.h"
/**
 * void _print_rev_recursion - recursive function to reverse a string
 * @s: character to be reverse
 * Return: Always s;
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
