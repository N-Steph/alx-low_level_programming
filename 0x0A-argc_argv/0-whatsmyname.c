#include <stdio.h>

/**
 * main - print source filename
 * @argc: argument count
 * @agrv: array of strings passed to main.
 *
 * Return: 0 (Success).
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
