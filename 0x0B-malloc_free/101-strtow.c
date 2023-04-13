#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * count_words - count words
 * @s: string to be counted
 * Return: W;
 */
int count_words(char *s)
{
	int flag = 0, w = 0, c;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * strtow - function to split string
 * @str: string argument
 * Return: NULL or pointer
 */
char **strtow(char *str)
{
	char **words, *tmp;
	int i, k = 0, length = 0, num_words, char_count = 0, start_index, end_index;

	while (*(str + length))
		length++;
	num_words = count_words(str);

	if (num_words == 0)
		return (NULL);

	words = (char **) malloc(sizeof(char *) * (num_words + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (char_count)
			{
				end_index = i;
				tmp = (char *) malloc(sizeof(char) * (char_count + 1));
				if (tmp == NULL)
					return (NULL);
				while (start_index < end_index)
					*tmp++ = str[start_index++];
				*tmp = '\0';
				words[k] = tmp - char_count;
				k++;
				char_count = 0;
			}
		}
		else if (char_count++ == 0)
		{
			start_index = i;
		}
	}
	words[k] = NULL;
	return (words);
}
