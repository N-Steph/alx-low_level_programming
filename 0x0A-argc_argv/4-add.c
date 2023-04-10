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

	sum = 0;
	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			while (**argv != '\0')
			{
				if (**argv < 48 || **argv > 57)
				{
					printf("Error\n");
					return (1);
				}
				*argv = *argv + 1;
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
