/**
 * _strcmp - function to ompare two numbers
 * @s1: string1
 * @s2: stirng2
 * Return: S1 S2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
