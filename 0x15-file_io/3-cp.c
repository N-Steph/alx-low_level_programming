#include "main.h"

/**
 * main - copies the content of a file to another file
 *
 * @ac: number of command line arguments
 * @args: array containing the command line arguments
 *
 * Return: 0 on success, -1 falure
 */
int main(int ac, char **args)
{
	ssize_t fd_file_from, fd_file_to, char_written, char_read;
	int cl_file_to, cl_file_from;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (args[1] == NULL || args[2] == NULL)
		return (-1);
	fd_file_from = open(args[1], O_RDONLY);
	if (fd_file_from == -1)
		error_exist_read(args[1]);

	fd_file_to = open(args[2], O_WRONLY | O_TRUNC | O_CREAT, 00664);
	if (fd_file_to == -1)
		error_create_write(args[2]);

	while (1)
	{
		char_read = read(fd_file_from, buff, 1024);
		if (char_read == 0)
			break;
		if (char_read == -1)
			error_exist_read(args[1]);
		char_written = write(fd_file_to, buff, char_read);
		if (char_written == -1)
			error_create_write(args[2]);
	}

	cl_file_from = close(fd_file_from);
	cl_file_to = close(fd_file_to);
	if (cl_file_from == -1)
		error_closure(cl_file_from);

	if (cl_file_to == -1)
		error_closure(cl_file_to);
	return (0);
}

/**
 * error_closure - prints error message if closing of a file failed
 *
 * @fd: file descriptor of the file we are trying to close
 *
 * Return: nothing
 */
void error_closure(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * error_create_write - prints error messeage
 *
 * Description: This function prints an error message if you can not create
 * or write to filename
 *
 * @filename: Name of file
 *
 * Return: nothing
 */
void error_create_write(char *filename)
{
	if (filename == NULL)
		return;
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * error_exist_read - prints error message
 *
 * Description: This function prints an error message if the file name
 * doesn't exist or if you can't read it
 *
 * @filename: Name of ile
 *
 * Return: nothing
 */
void error_exist_read(char *filename)
{
	if (filename == NULL)
		return;
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}
