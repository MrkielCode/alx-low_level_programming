#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * close_file - to close a file
 * @fd: file description
 */

void close_file(int fd)
{
	int file;

	file = close(fd);
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * copy_to_file - to copy from file
 * @file_from: pointer string to be copy from
 * @file_to: pointer string file is copy to
 */

void copy_to_file(const char *file_from, const char *file_to)
{
	int from_fd;
	int to_fd;
	char buf[BUFFER_SIZE];
	ssize_t file_read, file_write;

	from_fd = open(file_from, O_RDONLY);

	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	to_fd = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	while ((file_read = read(from_fd, buf, BUFFER_SIZE)) > 0)
	{
		file_write = write(to_fd, buf, file_read);
		if (file_write != file_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to), exit(99);
		}
	}

	close_file(from_fd);
	close_file(to_fd);
}

/**
 * main - Entry point
 * @argc: arg constant
 * @argv: arg variables
 * Return: 0 on sucesss
 */

int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;

	file_from = argv[1];
	file_to = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_to_file(file_from, file_to);

	return (0);
}
