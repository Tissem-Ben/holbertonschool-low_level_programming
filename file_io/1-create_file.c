#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Creates a file with specific content.
 * @filename: The name of the file to create.
 * @text_content: A NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length, bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		length = strlen(text_content);
		bytes_written = write(fd, text_content, length);
		if (bytes_written != length)
		{
			close(fd);
			return (-1);
		}
	}

	if (close(fd) == -1)
	{
		return (-1);
	}

	return (1);
}
