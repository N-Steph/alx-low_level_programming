#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: array of pointers pointing to each argument
 *
 * Return: 0 (Success), otherwise (failure)
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	char *operator;
	char *operators = "+-*/%";
	char *search_result;
	int (*answer)(int, int);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	search_result = strchr(operators, *operator);
	if (search_result == 0)
	{
		printf("Error\n");
		exit(99);
	}
	if (num2 == 0 && (*operator == '/' || *operator == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	answer = get_op_func(operator);
	result = answer(num1, num2);
	printf("%d\n", result);
	return (0);
}
