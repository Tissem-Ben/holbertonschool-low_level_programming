#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include "print_error.h"

#define BUFFER_SIZE 1024

int open_source_file(const char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		print_error(98, "Error: Can't read from file %s\n", filename);
	}
	return (fd);
}

int open_destination_file(const char *filename)
{
	int fd;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		print_error(99, "Error: Can't write to file %s\n", filename);
	}
	return (fd);
}

int main(int argc, char *argv[])
{
	int from_fd, to_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];
	char fd_str[20];  /* Buffer for storing file descriptor as a string */

	if (argc != 3)
	{
		print_error(97, "Usage: cp file_from file_to\n", NULL);
	}

	from_fd = open_source_file(argv[1]);
	to_fd = open_destination_file(argv[2]);

	while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(from_fd);
			close(to_fd);
			print_error(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		close(from_fd);
		close(to_fd);
		print_error(98, "Error: Can't read from file %s\n", argv[1]);
	}

	sprintf(fd_str, "%d", from_fd);
	if (close(from_fd) == -1)
	{
		print_error(100, "Error: Can't close fd %s\n", fd_str);
	}

	sprintf(fd_str, "%d", to_fd);
	if (close(to_fd) == -1)
	{
		print_error(100, "Error: Can't close fd %s\n", fd_str);
	}

	return (0);
}

