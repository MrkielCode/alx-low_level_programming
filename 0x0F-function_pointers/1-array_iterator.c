#include <stdlib.h>
/**
 * array_iterator - function to iterate array
 * @size: size of array
 * @array: array numbers
 * @action: call function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
