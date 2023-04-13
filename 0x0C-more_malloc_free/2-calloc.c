#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - To allocate memmory to array
 * @nmemb: array
 * @size: size of an array
 *
 * Return: Always pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *arr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	arr = calloc(nmemb, size);

	if (arr == NULL)
		return (NULL);
	memset(arr, 0, nmemb * size);

	return (arr);
}
