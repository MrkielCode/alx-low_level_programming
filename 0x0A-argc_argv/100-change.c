#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc:  arguments count
 * @argv: arguments variable
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int digits, i = 0, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}

	digits = atoi(argv[1]);
	res = 0;

	if (digits < 0)
	{
		printf("0\n");
		return (0);
	}

	while (i < 5 && res >= 0)
	{
		while (digits >= coins[i])
		{
			res++;
			digits -= coins[i];
		}
		i++;
	}

	printf("%d\n", res);
	return (0);
}

