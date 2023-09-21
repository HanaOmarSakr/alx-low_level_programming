#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - .......
 * @filename: ........
 * @letters: .....
 * Return: .........
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t s;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (-1);

	t = read(fd, buffer, letters);
	s = write(STDOUT_FILENO, buffer, t);

	free(buffer);
	close(fd);
	return (s);
}
