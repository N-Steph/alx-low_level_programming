#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of pointers to arguments
 *
 * Return: 0 (success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to", argv[1], argv[2]);
		exit(97);
	}
	copy_file(argv[1], argv[2]);
	return (0);
}

/**
 * copy_file - copy file content
 * @file_from: file to copy from
 * @file_to: file to copy to
 *
 * Description: copies the content of file_from
 * into file_to
 *
 * Return: nothing
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_file_from;
	int fd_file_to;
	int n, i, m;
	char buffer[1024];

	fd_file_from = check_file_from(file_from);
	fd_file_to = check_file_to(file_to);
	i = 1;
	while (buffer[i - 1] != '\0')
	{
		n = read(fd_file_from, buffer, 1024);
		if (n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
			exit(98);
		}
		i = 0;
		while (i < n)
		{
			m = write(fd_file_to, &buffer[i], 1);
			if (m == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
				exit(99);
			}
			i++;
		}
	}
	n = close(fd_file_from);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Erro: Can't close fd %d\n", fd_file_from);
		exit(100);
	}
	n = close(fd_file_to);
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_to);
		exit(100);
	}
}

/**
 * check_file_to - check file
 * @file_to: name of file
 *
 * Return: file descriptor
 */
int check_file_to(char *file_to)
{
	int fd_file_to;
	int n;

	fd_file_to = open(file_to, O_TRUNC);
	if (fd_file_to == -1)
		fd_file_to = open(file_to, O_CREAT | O_WRONLY, 0664);
	else
	{
		n = close(fd_file_to);
		if (n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_file_to);
			exit(100);
		}
		fd_file_to = open(file_to, O_WRONLY);
	}
	if (fd_file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	return (fd_file_to);
}

/**
 * check_file_from - check if file exist
 * @file_from: name of file
 *
 * Return: file descriptor
 */
int check_file_from(char *file_from)
{
	int fd_file_from;

	fd_file_from = open(file_from, O_RDONLY);
	if (fd_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read form %s\n", file_from);
		exit(98);
	}
	return (fd_file_from);
}
