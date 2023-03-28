#include "main.h"
/**
 * rev_string - function to reverse string
 *
 * @s - paramter to be printed
 *
 * Return: Always 0.
 */

void rev_string(char *s)
{
	int count, index;
	char tmp;

	count = 0;
	index = 0;
	while (s[index++])
		count++;
	for (index = count - 1; index >= count / 2; index--)
	{
		tmp = s[index];
		s[index] = s[count - index - 1];
		s[count - index - 1] = tmp;
	}
}
