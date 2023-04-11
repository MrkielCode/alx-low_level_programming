#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function concatenate string
 * @s1: string destination
 * @s2: string source
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int l1 = strlen(s1);
	int l2 = strlen(s2);
	int i, j;
	char *strcat;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	strcat = (char *)malloc((l1 + l2 + 1) * sizeof(char));
	if (strcat == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		strcat[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++, i++)
	{
		strcat[i] = s2[j];
	}
	strcat[i] = '\0';
	return (strcat);
}
