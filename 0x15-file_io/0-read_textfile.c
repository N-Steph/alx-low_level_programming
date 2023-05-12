#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads and printf a text file
 *
 * @filename: file name
 * @letters: number of letters from filename, to print
 *
 * Description: Read a text file and prints it to the
 * POSIX standard output
 *
 * Return: actual number of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdes;
	ssize_t actual_letters;
	char characters[1024];

	if (filename == NULL)
		return (0);
	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
		return (0);
	actual_letters = 0;
	if (letters > 1024)
	{
		while (letters > 1024)
		{
			actual_letters += print_buffer(fdes, characters, 1024);
			letters -= 1024;
		}
		if (letters > 0)
		{
			actual_letters += print_buffer(fdes, characters, letters);
		}
	}
	else
	{
		actual_letters += print_buffer(fdes, characters, letters);
	}
	close(fdes);
	return (actual_letters);
}

/**
 * print_buffer - print buffer
 * @fdes: file descriptor
 * @characters: buffer
 * @count: number of letters to print
 *
 * Return: number of letters printed
 */
size_t print_buffer(int fdes, char *characters, size_t count)
{
	int n;
	int i;

	n = read(fdes, characters, count);
	if (n == -1)
		exit(0);
	for (i = 0; i < n; i++)
	{
		write(STDOUT_FILENO, characters, 1);
		characters++;
	}
	return (i);
}
