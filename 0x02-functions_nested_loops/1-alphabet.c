#include "main.h"
/**
 * main - Print Alphabet
 *
 * Description: 'program to print alphabet using user define
 * header putchar'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
