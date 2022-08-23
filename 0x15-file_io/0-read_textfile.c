#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>

/**
 * read_textfile - Read text file from storage
 * @filename: pointer to a file
 * @letters: numbers of byte of the file
 *
 * Return: numbers of byte in the file 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	char buffer[letters];

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	letters = read(fd, buffer, letters);
	buffer[letters] = '\0';
	close(fd);
	/* write to standard output */
	letters = write(STDOUT_FILENO, buffer, letters);
	if (letters == -1)
		return (0);
	return (letters);
}
