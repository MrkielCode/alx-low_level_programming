#include <stdio.h>
/**
 * _strstr - substring function
 * @haystack:  paramter to be scanned
 * @needle: parameter to be matched
 * Return: Always haystack
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *s1 = haystack;
		char *s2 = needle;

		while (*s1 == *s2 && *s2 != '\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
			return (haystack);
		haystack++;
	}
	return (NULL);
}
