#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer_mem(char *file);
void close_file(int file);
/**
 * create_buffer_mem - buffer to create memory allocation
 * @file: file to be stored in buffer
 * Return: buffer allocated
 */
char *create_buffer_mem(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (!buff)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}

/**
 * close_file - To clode a file
 * @file: file to be closed
 * Return: void
 */

void close_file(int file)
{
	if (close(file) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * copy_file - file to be copy from
 * @from_file: original file
 * @to_file: to copy from
 * Return: void;
 */

void copy_file(char *from_file, char *to_file)
{
	int from, to, rd, wr;
	char *buff;

	buff = create_buffer_mem(to_file);
	from = open(from_file, O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(to_file, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", from_file);
			free(buff);
			exit(98);
		}
		wr = write(to, buff, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", to_file);
			free(buff);
			exit(99);
		}
		rd = read(from, buff, 1024);
		to = open(to_file, O_WRONLY | O_APPEND);
	} while (rd > 0);
	free(buff);
	close_file(from);
	close_file(to);
	exit(0);
}

/**
 * main - To copies a file to another
 * @argc: constant argument
 * @argv: argument variable
 * Return: 0 on sucess
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}
