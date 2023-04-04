#include <stdio.h>
/**
 * print_diagsums - funtions to add diagonal array
 * @a: parameters for an array
 * @size: parameter for array size
 * Return: Always 1
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0, sum2 = 0;

	for (i = 0; i < size; ++i)
	{
		sum1 = sum1 + *(a + i * (size + 1));
		sum2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", sum1, sum2);
}

