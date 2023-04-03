/*
 * _memcpy - functions to copy memory
 * @dest: parameter destination
 * @src: parameter source
 * Return: Always dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = (char *)dest;
	char *s = (char *)src;
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		d[j] = s[j];
	}
	return (d);
}
