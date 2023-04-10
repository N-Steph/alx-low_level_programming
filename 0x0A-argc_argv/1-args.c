#include <stdio.h>

/**
 * main - prints number of arguments passed to main
 * @argc: argument count
 * @argv: array of strings passed to main
 *
 * Return: 0 (Success)
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
