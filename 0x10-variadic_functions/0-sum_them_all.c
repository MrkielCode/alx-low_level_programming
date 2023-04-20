#include <stdarg.h>
/**
 * sum_them_all - to sum all parameters
 * @n: size of the parameters
 * Return: Sum or 0
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	unsigned int i, sum;

	va_start(ap, n);

	if (n == 0)
		return (0);
	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
