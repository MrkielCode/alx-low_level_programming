#include <stdlib.h>
#include <string.h>

/**
 * argstostr - function to concatenate arguments
 * @ac: argument constant
 * @av: argument varibale
 * Return: Pointer or NULL
 */

char *argstostr(int ac, char **av)
{
	int counter1, counter2, len, j;
	char *conStr;

	len = 0;
	j = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (counter1 = 0; counter1 < ac; counter1++)
		len += strlen(av[counter1]) + 1;

	conStr = malloc(sizeof(char) * len);
	if (conStr == NULL)
		return (NULL);

	counter1 = 0;
	while (counter1 < ac)
	{
		for (counter2 = 0; av[counter1][counter2] != '\0'; counter2++)
			conStr[j++] = av[counter1][counter2];
		conStr[j++] = '\n';
		counter1++;
	}
	return (conStr);
}
