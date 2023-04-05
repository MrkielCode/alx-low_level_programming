/**
 * factorial - function for factorial
 * @n: paramter n
 * Return: Always n.
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n >= 1 ? n * factorial(n - 1) : 0);
}

