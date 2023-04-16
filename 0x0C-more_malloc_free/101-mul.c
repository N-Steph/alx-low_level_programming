#include "main.h"
#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: array of pointers to arguments
 *
 * Description: This program multiplies two positive
 * numbers. May exit with a status of 98.
 *
 * Return: 0(Success)
 */
int main(int argc, char *argv[])
{
	unsigned long int i;
	int num1;
	int num2;
	int mul;
	char *ptr_1;
	char *ptr_2;

	ptr_1 = argv[1];
	ptr_2 = argv[2];
	if (argc != 3)
	{
		print_string("Error");
		exit(98);
	}
	for (i = 0; i < strlen(ptr_1); i++)
	{
		if (!(isdigit(*ptr_1)))
		{
			print_string("Error");
			exit(98);
		}
		ptr_1++;
	}
	for (i = 0; i < strlen(ptr_2); i++)
	{
		if (!(isdigit(*ptr_2)))
		{
			print_string("Error");
			exit(98);
		}
		ptr_2++;
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}

/**
 * print_string - print_string
 * @str: pointer to string
 *
 * Return: nothing
 */
void print_string(char *str)
{
	int NEWLINE;

	NEWLINE = 10;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(NEWLINE);
}
