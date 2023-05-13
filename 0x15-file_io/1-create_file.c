#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: name of created file
 * @text_content: string to write in the file
 *
 * Description: This function create a file and
 * write some text into it.
 *
 * Return: 1 (Success), -1 (failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fdes1;
	int fdes;
	int n;

	if (filename == NULL)
		return (-1);
	fdes = open(filename, O_TRUNC);
	if (fdes != -1 && text_content != NULL)
	{
		close(fdes);
		fdes = open(filename, O_WRONLY);
		if (fdes == -1)
			return (-1);
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
	close(fdes);
	fdes1 = open(filename, O_CREAT, 00600);
	if (fdes1 == -1)
		return (-1);
	close(fdes1);
	fdes1 = open(filename, O_WRONLY);
	if (text_content == NULL)
		return (1);
	while (*text_content != '\0')
	{
		n = write(fdes1, text_content, 1);
		if (n == -1)
			return (-1);
		text_content++;
	}
	close(fdes1);
	return (1);
}
