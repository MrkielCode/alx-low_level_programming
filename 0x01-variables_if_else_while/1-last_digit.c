#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: 'program to check numbers'
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
		printf("last digit of %d is %d and is greater than 5", n, l);
	if (l < 0 && l < 6)
		printf("last digit of %d is %d and is less than 6 and not 0", n, l);
	if (l == 0)
		printf("last digit of %d is %d and is 0", n, l);
	return (0);
}
