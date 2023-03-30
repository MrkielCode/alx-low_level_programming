/**
 * leet - function to encodes string
 * @str: parameter to be encoded
 * Return: Always 0
 */

char *leet(char *str)
{
	int i, j;
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 9; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
		}
		i++;
	}
	return (str);
}
