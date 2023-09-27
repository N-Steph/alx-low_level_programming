#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 *
 * @filename: text file name
 * @letters: number of characters/bytes to read and print to standard output
 *
 * Return: actual number of letters read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t char_read, char_written;
	char *buf;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	char_read = read(fd, buf, letters);
	if (char_read == -1)
	{
		free(buf);
		return (0);
	}
	char_written = write(STDOUT_FILENO, buf, char_read);
	if (char_written == -1 || char_written != char_read)
		return (0);
	free(buf);
	close(fd);
	return (char_read);
}
