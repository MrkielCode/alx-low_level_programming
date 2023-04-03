#include "main.h"
/**
 *  _memcpy - Function to print memory
 *  @dest: destination parameters
 *  @src: source parameters
 *  @n: length of memory
 *  Return: Always (d)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = (char *)dest;
	char *s = (char *)src;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}
	return (d);
}
