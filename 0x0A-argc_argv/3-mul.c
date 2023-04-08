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
	if (argc > 2)
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);
		int res = a * b;

		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
