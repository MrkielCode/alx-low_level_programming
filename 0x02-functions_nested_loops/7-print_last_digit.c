#include "main.h"
/**
 * print_last_digit - function to print last digits
 *
 * @n: parameter to be printed
 *
 * Return: Always n
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
