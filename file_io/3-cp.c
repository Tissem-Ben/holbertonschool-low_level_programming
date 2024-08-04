#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include "print_error.h"

/**
 * main - Copies the content of one file to another.
 * @ac: The number of arguments.
 * @av: The arguments.
 * Return: 0 on success, or exit with an error code.
 */
int main(int ac, char **av)
{
	int from_fd, to_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];
	mode_t file_mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	to_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, file_mode);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(from_fd);
		exit(99);
	}

	while ((bytes_read = read(from_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(from_fd);
			close(to_fd);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		close(from_fd);
		close(to_fd);
		exit(98);
	}

	if (close(from_fd) == -1)
		print_error(100, "Error: Can't close fd %d\n", from_fd);

	if (close(to_fd) == -1)
		print_error(100, "Error: Can't close fd %d\n", to_fd);

	return (0);
}
