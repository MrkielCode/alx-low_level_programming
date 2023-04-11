#include "main.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - function create to array
 * @size: size of the array
 * @c: char argument
 * Return: pointer or NUll
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	i = 0;
	s = malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		if (s == NULL)
			return (NULL);
		s[i] = c;
		i++;
	}
	return (s);
}
