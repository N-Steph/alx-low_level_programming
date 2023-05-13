#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * append_text_to_file - append text at the end of a file
 * @filename: name of file
 * @text_content: text to append
 *
 * Return: 1 (success), -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes;
	int n;

	if (filename == NULL)
		return (-1);
	fdes = open(filename, O_APPEND | O_WRONLY);
	if (fdes == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fdes);
		return (1);
	}
	while (*text_content != '\0')
	{
		n = write(fdes, text_content, 1);
		if (n == -1)
			return (-1);
		text_content++;
	}
	close(fdes);
	return (1);
}
