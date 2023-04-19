#include <stdio.h>
/**
 * int_index - to locate index of array
 * @array: array to be search
 * @size: size of an array
 * @cmp: function to be passed
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
