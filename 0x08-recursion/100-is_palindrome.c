int performPalindrome(char *s, int l, int r);
int _strlen(char *s);
/**
 * is_palindrome - function to check for palindrome
 * @s: string to be checked
 * Return: Always 1 or 0;
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	return (0);
	return (performPalindrome(s, 0, _strlen(s)));
}

/**
 * _strlen - function to check the length of string
 * @s: string to be checked
 * Return: always 0;
 */

int _strlen(char *s)
{
	if (*s)
	return (1 + _strlen(s + 1));
	return (0);
}

/**
 * performPalindrome - to compare strings
 * @s: string to be compared
 * @l: left index of the string
 * @r: right index of the string
 * Return: Always 0.
 */

int performPalindrome(char *s, int l, int r)
{
	if (l >= r)
		return (1);
	if (*(s + l) != *(s + r - 1))
		return (0);
	return (performPalindrome(s, l + 1, r - 1));

}
