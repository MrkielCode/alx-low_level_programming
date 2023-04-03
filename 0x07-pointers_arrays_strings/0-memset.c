#include "main.h"
/**
 * _memset - this function to set a momery to constant
 * @s: source parameter
 * @b: constant parameter
 * @n: length of the string
 * Return: Always src
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;
	char *src = (char *)s;

	for (k = 0; k < n; k++)
	{
		src[k] = b;
	}
	return (src);
}
