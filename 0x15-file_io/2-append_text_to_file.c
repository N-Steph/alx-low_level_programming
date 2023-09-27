#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * Description: This function opens a file with name pointed by filename,
 * and append the string pointed by text_content to the file
 *
 * @filename: Name of file to append text to
 * @text_content: Text to add to the opened file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_len;
	ssize_t char_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
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
