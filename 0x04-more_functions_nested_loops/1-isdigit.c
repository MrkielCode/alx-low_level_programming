#include "main.h"

/**
 * _isdigit - Checks for Integer Values
 * @c: Integer value
 * Return: 1 if @c is Integer, otherwise 0
 */

int _isdigit(int c)
{
	char count;
	int isDig = 0;

	for (count = '0'; count <= '9'; count++)
	{
		if (c == count)
			isDig = 1;
	}
	return (isDig);
}
