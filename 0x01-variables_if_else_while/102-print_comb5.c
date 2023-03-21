#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'program to print number combination'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;
	int j;
	int m;
	int n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			for (m = 0; m < 10; m++)
			{
				for (n = 0; n < 10; n++)
				{
					if (i != j && m != n)
					{	
						putchar(i + '0');
						putchar(j + '0');
						putchar(' ');
						putchar(m + '0');
						putchar(n + '0');
						putchar(',');
						putchar(' ');
					}
				}

			}
		}
	}

	return (0);
}
