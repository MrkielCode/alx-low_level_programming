#include "main.h"

/**
 * append_text_to_file - to append text file
 * @filename: filename
 * @text_content: string pointer
 * Return: -1 or 1
 */

int append_text_to_file(const char *filename, char *text_content)
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

	file = open(filename, O_WRONLY | O_APPEND);

	wr = write(file, text_content, len);

	if (file == -1 || wr == -1)
		return  (-1);

	close(file);

	return (1);
}
