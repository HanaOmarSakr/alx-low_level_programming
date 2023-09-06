#include "main.h"

/**
 * read_textfile - .......
 * @filename: ........
 * @letters: .....
 * Return: .........
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes;
	char buffer[letters];

	if (!filename || ! letters)
		return (0);

	file = open(filename, O_RDONLY);
	if (filename = -1)
		return (0)

	bytes = read(fd, &buffer[0]; letters);
	bytes = write(STDOUT_FILENO, &buffer[0], letters);
	close(fd);
	return (letters);
}
