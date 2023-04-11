#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - it duplicate string to a new memory
 * @str: string argument
 * Return: Null or pointer
 */

char *_strdup(char *str)
{
	char *strCopy;
	int i;

	if (str == NULL)
		return (NULL);

	strCopy = (char *)malloc(strlen(str) + 1);

	if(strCopy == NULL)
		return NULL;

	for (i = 0; str[i]; i++)
	{

		if (str == NULL)
			return (NULL);
		strCopy[i] = str[i];
	}

	strCopy[i++] = '\0';
	return (strCopy);
}
