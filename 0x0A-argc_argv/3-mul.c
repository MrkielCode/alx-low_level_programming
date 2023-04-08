#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument variables
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int res = 1, i;

	if (argc > 1 && argc < 4)
	{
	for (i = 1; i < argc; i++)
	{
		res *= atoi(argv[i]);
	}
	printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
