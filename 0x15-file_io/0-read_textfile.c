#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - To read text from terminal
 * @filename: the filename
 * @letters:  size of string to be read
 * Return: 0 or number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_file;
	ssize_t write_file;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	read_file = read(fd, buffer, letters);

	write_file = write(STDOUT_FILENO, buffer, read_file);

	free(buffer);
	close(fd);

	return (write_file);

}
