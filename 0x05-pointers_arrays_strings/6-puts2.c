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
	int j = 0;
	int i;

	while (str[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
