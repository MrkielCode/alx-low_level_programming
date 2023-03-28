#include "main.h"
/**
 * puts_half - function to print half of characters
 *
 * @str:  parameter to be used
 *
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int length;
	int n;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 == 1)
	{
		n = (length - 1) / 2;
		length += 1;
	}
	else
	{
		n = length / 2;
	}
	for (; n < length; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
