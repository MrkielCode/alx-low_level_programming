#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - to read a file
 * @filename: filename
 * @letters: size of letters
 * Return: NULL or 0;
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd;
	ssize_t *buffer;
	ssize_t file;
	ssize_t wr;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	rd = read(file, buffer, letters);
	wr = write(STDOUT_FILENO, buffer, rd);

	if (wr == -1)
		return (0);

	return (wr);
}
