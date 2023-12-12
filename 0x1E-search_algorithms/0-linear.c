#include "search_algos.h"
/**
 * linear_search - To find a value at specific index
 * @array: array which is searched
 * @size: size of the array
 * @value: value to be found
 * Return: -1 or index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);

	}
	return (-1);
}
