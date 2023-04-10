#include <stdio.h>

/**
 * main - prints all argument passed to it
 * @argc: argument count
 * @argv: array of arguments passed to main
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
