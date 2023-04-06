int main_sqrt(int n, int j);
/**
 * _sqrt_recursion - square root recursion
 * @n: number of square root
 * Return: result
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (main_sqrt(n, 0));
}

/**
 * main_sqrt - to find natural numbers
 * @n: numbers
 * @j: loop
 * Return: Result
 */

int main_sqrt(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (main_sqrt(n, j + 1));
}
