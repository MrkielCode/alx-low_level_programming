#include "main.h"
#include "string.h"
/**
 * _strlen - function to check length
 * @s: parameter to be printed
 * Return: Always void
 */

int _strlen(const char *s)
{
	int len;

	for (len = 0; s[len] != '\0';)
		len++;
	return (len);
}
/**
 * append_text_to_file - to create a file and write permission
 * @filename: names of the file
 * @text_content: buffer to the string
 * Return: 1 on sucess or -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d;
	int len;
	int write_file;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = _strlen(text_content);
		write_file = write(file_d, text_content, len);

		if (write_file == -1)
		{
			close(file_d);
			return (-1);
		}
	}

	close(file_d);
	return (1);
}
