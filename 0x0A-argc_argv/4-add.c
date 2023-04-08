#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * main - Entry point
 * @argc: arguiment count
 * @argv: argument variables
 * Return: Always 0.
 */

int checkDigit(char *s)
{
	unsigned int count = 0;

	while(count < strlen(s))
	{
		if (s[count] < 48 || s[count] > 57)
		{
			return (0);
		}
		count++;
	}
	return (1);
}
int main(int argc, char *argv[])
{
	int sum = 0, count;

	/*if (argc > 1)*/
	{
		for (count = 1; count < argc; count++)
		{
			if (checkDigit(argv[count]))
			{
				sum += atoi(argv[count]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}

		}
		printf("%d\n", sum);
	} 
	/*else 
	{
		printf("0\n");
	}*/
	return (0);
}
