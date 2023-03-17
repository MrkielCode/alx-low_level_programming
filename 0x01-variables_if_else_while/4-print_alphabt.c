#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'program to print alphabets'
 *
 * Return: Always (0) success
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
