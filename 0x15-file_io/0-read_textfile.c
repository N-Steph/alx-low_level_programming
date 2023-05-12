#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
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
	ssize_t i;
	ssize_t n;
	char characters[1024];

	if (filename == NULL)
		return (0);
	fdes = open(filename, O_RDONLY);
	if (fdes == -1)
		return (0);
	actual_letters = 0;
	if (letters > 1024)
	{
		while (letters > 0)
		{
			n = read(fdes, characters, 1024);
			if (n == -1)
				return (actual_letters);
			for (i = 0; i < n; i++)
				_putchar(characters[i]);
			actual_letters += n;
			letters -= 1024;
		}
	}
	else
	{
		actual_letters = read(fdes, characters, letters);
		if (actual_letters == -1)
			return (0);
		for (i = 0; i < actual_letters; i++)
			_putchar(characters[i]);
	}
	close(fdes);
	return (actual_letters);
}
