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

	if (argc > 1)
	{
		for (count = 1; count < argc; count++)
		{
			if (*argv[count] < 48 || *argv[count] > 57)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[count]);		
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
