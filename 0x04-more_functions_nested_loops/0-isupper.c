#include "main.h"

/**
 * _isupper - Check for only upper case letter
 * @c: input character
 * Return: 1 if upper case, otherwise 0
 */

int _isupper(int c)
{
	char upper;
	int isUpper = 0;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (c == upper)
			isUpper = 1;
	}
	return (isUpper);
}
