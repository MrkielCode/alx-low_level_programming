/**
 * flip_bits - To flip bits
 * @n: number1
 * @m: number2
 * Return: flip numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int XOR;
	unsigned int counter;
	int i;

	XOR = n ^ m;
	counter = 0;
	i = 0;

	while (i < 64)
	{
		if ((XOR >> i) & 1)
			counter++;
		i++;
	}
	return (counter);
}
