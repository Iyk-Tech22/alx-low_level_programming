#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Read text file from storage
 * @filename: pointer to a file
 * @letters: numbers of byte of the file
 *
 * Return: numbers of byte in the file
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, r_write, r_read;
	char *buffer;

	if (!filename)
		return (0);
	buffer = malloc(letters);
	fd = open(filename, O_RDONLY);
	r_read = read(fd, buffer, letters);
	/* write to standard output */
	r_write = write(STDOUT_FILENO, buffer, r_read);
	if (r_write == -1 || r_read == -1 || fd == -1 || r_write != r_read)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);
	return (r_write);
}
