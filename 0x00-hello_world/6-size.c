#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'program to print size of datatypes'
 *
 * Return: Always 0 (sucesss)
 */

int main(void)
{
	char charType;
	float intType;
	long int longInt;
	long long int long2Int;
	float floatType;

	printf("Size of a char: %d byte(s)\n", sizeof(charType));
	printf("Size of an int: %d byte(s)\n", sizeof(intType));
	printf("Size of a long int: %d byte(s)\n", sizeof(longInt));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long2Int));
	printf("Size of a float: %d byte(s)\n", sizeof(floatType));

	return (0);
}

