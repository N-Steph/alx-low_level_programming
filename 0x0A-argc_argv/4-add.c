#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: argument count
 * @argv: array of argument passed to main
 *
 * Return: 0 (Success), 1 (failure)
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	int number;
	char *ptr_num;

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			ptr_num = argv[i];
			while (*argv[i] != '\0')
			{
				if (*argv[i] <= 47 || *argv[i] >= 58)
				{
					printf("Error\n");
					return (1);
				}
				argv[i] = argv[i] + 1;
			}
			argv[i] = ptr_num;
			number = atoi(argv[i]);
			if (number >= 0)
				sum += number;
		}
		printf("%d\n", sum);
	}
	return (0);
}
