#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"

/**
 * is_num - checks if a string contains only digits
 *
 * @str: string to be evaluated
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_num(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @str: string to evaluate
 * Return: the length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * handle_errors - handles errors for main
 * Return: void
 */

void handle_errors(void)
{
	printf("%s\n", ERR_MSG);
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, carry, digit1, digit2, *result, non_zero_found = 0;

	num1 = argv[1];
	num2 = argv[2];

	if (argc != 3 || !is_num(num1) || !is_num(num2))
		handle_errors();

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2 + 1;

	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	i = 0;
	while (i <= len1 + len2)
	{
		result[i] = 0;
		i++;
	}

	len1--;

	while (len1 >= 0)
	{
		digit1 = num1[len1] - '0';
		carry = 0;
		len2 = _strlen(num2) - 1;
		while (len2 >= 0)
		{
			digit2 = num2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
			len2--;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
		len1--;
	}

	i = 0;

	while (i < len - 1)
	{
		if (result[i])
			non_zero_found = 1;
		if (non_zero_found)
			_putchar(result[i] + '0');
		i++;
	}
	if (!non_zero_found)
		_putchar('0');

	_putchar('\n');
	free(result);

	return (0);
}
