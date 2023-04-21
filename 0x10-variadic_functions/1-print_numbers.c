#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between numbers
 * @n: number of integers to be printed
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list opt_arg;

	va_start(opt_arg, n);
	if (separator != NULL && n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(opt_arg, int));
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	va_end(opt_arg);
	printf("\n");
}
