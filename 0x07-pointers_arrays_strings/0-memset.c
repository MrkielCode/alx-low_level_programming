#include "main.h"
/**
 * _memcpy - this function copy a memory in another variable
 * @dest:  destination parameter of the string
 * @src: source parameter of the string
 * @n: length of the string
 * Return: Always dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;
	char *d = (char *) dest;
	char *s = (char *) src;

	for (k = 0; k < n; k++)
	{
		d[k] = s[k];
	}
	return (d);
}
