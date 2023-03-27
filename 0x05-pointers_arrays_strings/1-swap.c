/**
 * swap_int - function to swap two integer values
 *
 * @a: parameter to be swap to b
 * #b: parameter to be swap to a
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
