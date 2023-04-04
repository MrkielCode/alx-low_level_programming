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

        while (s[counter] != '\0')
        {
                if (s[counter] == c)
                        return (s + counter);
                counter++;
        }
        return (NULL);
}

/**
 * _strpbrk - function to be executed
 * @s: parameter to be scanned
 * @accept: parameter to be match
 * Return: Always null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (_strchr(accept,*s))
			return s;
		else
			s++;
	}
	return (NULL);
}
