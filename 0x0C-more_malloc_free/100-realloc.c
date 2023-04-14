#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - To reallocate memory size
 * @ptr: pointer array
 * @old_size: old size of memory
 * @new_size: new size of memory
 * Return: Always pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newPtr;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	newPtr = malloc(new_size);
	if (newPtr == NULL)
		return (NULL);

	if (new_size > old_size)
		memcpy(newPtr, ptr, old_size);
	else
		memcpy(newPtr, ptr, new_size);

	free(ptr);

	return (newPtr);
}
