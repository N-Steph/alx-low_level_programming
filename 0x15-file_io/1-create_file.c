#include "main.h"

/**
 * create_file - Creates a file
 *
 * Description: create_file function creates a file with the rw-------- and
 * writes the content of text_content into the file if the file name passed
 * to it doesn't exist. If the file exist it is truncated.
 *
 * @filename: Name of file to create
 * @text_content: text to write into created file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, text_len;
	ssize_t char_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	text_len = _strlen(text_content);
	char_written = write(fd, text_content, text_len);
	if (char_written == -1 || char_written != text_len)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}

/**
 * _strlen - determine the length of a string
 * @s: pointer to the array of character containing
 * the string
 *
 * This function counts the number of bytes in a string
 * except the '\0' character.
 *
 * Return: len (number of bytes)
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s += 1;
	}
	return (len);
}
