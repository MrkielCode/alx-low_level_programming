#include "main.h"

/**
 * create_file - to create
 * @filename: filename
 * @text_content: string pointer
 * Return: -1 or 1
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	int wr;
	int len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	wr = write(file, text_content, len);

	if (file == -1 || wr == -1)
		return  (-1);

	close(file);

	return (1);
}
