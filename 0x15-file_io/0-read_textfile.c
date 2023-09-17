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
	int count = 0;
	ssize_t bytes;
	ssize_t bytes_read;
	char buffer[1000000];

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	bytes = read(fd, , letters);

	while ((bytes_read = read(fd, &buffer[0], letters)) > 0) {
        count += bytes_read;
    }
	if ()
	bytes = write(STDOUT_FILENO, &buffer[0], letters);
	close(fd);
	return (bytes);
}
