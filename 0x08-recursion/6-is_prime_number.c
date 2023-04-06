int checkPrime(int num, int count);
/**
 * is_prime_number - function to check prime
 * @n: parameter number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (checkPrime(n, n - 1));
}

/**
 * checkPrime - recursively function
 * @num: number
 * @count: increment
 * Return: Return 1 or 0.
 */
int checkPrime(int num, int count)
{
	if (count == 1)
		return (1);
	if (num % count == 0 && count > 0)
		return (0);
	return (checkPrime(num, count - 1));
}
