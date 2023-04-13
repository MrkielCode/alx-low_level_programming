#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - function to allocate memory
 * @b: string argument
 * Return: Always b or 98
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}


