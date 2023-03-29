/**
 * string_toupper - to convert to uppper case
 * @str : parameter to be printed
 * Return: Always 0;
 */

char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
	return (str);
}
