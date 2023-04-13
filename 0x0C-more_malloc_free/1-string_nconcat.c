#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function to concatenate
 * @s1: destination string
 * @s2: source string
 * @n: limits
 * Return: S1 or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int s1_len;
	unsigned int s2_len;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s1_len)
		mem = malloc((s1_len + s2_len + 1) * sizeof(char));
	else
		mem = malloc((s1_len + n + 1) * sizeof(char));

	if (mem == NULL)
		return (NULL);

	for (i = 0; n >= s1_len ? s1[i] != '\0' : s1[i] && i < n; i++)
	{
		mem[i] = s1[i];
	}

	for (j = 0; s2[j] && j < n; j++, i++)
	{
		mem[i] = s2[j];
	}
	mem[i] = '\0';
	return (mem);
}
