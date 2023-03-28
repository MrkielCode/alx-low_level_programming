#include <stdio.h>
/**
 * print_array - function to print array
 *
 * @a: parameter for array
 * @n: parameter for number of array
 *
 * Return: Always Void;
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
		putchar('\n');
}
