#include "main.h"
/**
 * _strncat - function to concatenates two strings
 *
 * @dest: string destination
 * @src: string source
 * @n: number of bytes
 * Return: Always dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[j++])
		i++;
	for (j = 0; src[j] && j < n; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
