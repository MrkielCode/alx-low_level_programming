#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: arguiment count
 * @argv: argument variables
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0, count;

	if (argc > 2)
	{
		for (count = 1; count < argc; count++)
		{
			if ((*argv[count] >= 'a' && (*argv[count] <= 'z')) ||
					(*argv[count] >= 'A' && *argv[count] <= 'Z'))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[count]);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
