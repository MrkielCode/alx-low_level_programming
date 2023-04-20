#include <stdlib.h>
#include <stdio.h>
/**
 * main - main function
 * @argv: arg variable
 * @argc: arg constant
 * Return: alwasy 0
 */
int main(int argc, char *argv[])
{
	int num_bytes, i;
	char *byte_array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	byte_array = (char *)main;
	i = 0;

	while (i < num_bytes)
	{
		if (i == num_bytes - 1)
		{
			printf("%02hhx\n", byte_array[i]);
			break;
		}
		printf("%02hhx ", byte_array[i]);
		i++;
	}
	return (0);
}
