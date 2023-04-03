#include <stdio.h>
/**
 * _strchr - function to match charcher
 * @s: paramter for  string
 * @c: paramter for constant
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int counter = 0;

	while (s[counter] >= '\0')
	{
		if (s[counter] == c)
			return (s + counter);
		counter++;
	}
	return (NULL);
}
/**
 * _strspn - function to find length of string
 * @s: string to be scanned
 * @accept: character that needs to be match
 * Return: Always lent;
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int lent = 0;

	while (_strchr(accept, *s++))
	{
		lent++;
	}
	return (lent);
}
