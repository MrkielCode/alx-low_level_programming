#include "main.h"
#include <stdio.h>

/**
 * main - Entry
 * Return: 0
 */

int main(void)
{
	int count;

	for (count = 1; count <= 99; count++)
	{
		if ((count % 3) == 0 && (count % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (count % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (count % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", count);
		}
	}
	printf("Buzz\n");
	return (0);
}
