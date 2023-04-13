#include "main.h"
#include <stdlib.h>

/**
 * array_range - to create an array with arrange
 * @min: minimum index
 * @max: maximum index
 * Return: Always return pointer or NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (max - min + 1); i++)
	{
		arr[i] = min + i;
	}

	return (arr);

}
