#include "main.h"
/**
 * _abs - function to check absolute number
 *
 *@n: parameter to be printed
 *
 * Return: Always n.
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = -(n);
	}
	else if (n >= 0)
	{
		n = n;
	}
	return (n);
}
