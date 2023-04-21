#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_strings - prints strings
 * @separator: string to be printed between numbers
 * @n: number of strings to be printed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list opt_arg;
	char *string_arg;

	va_start(opt_arg, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			string_arg = va_arg(opt_arg, char *);
			if (string_arg == NULL)
				printf("(nil)");
			else
				printf("%s", string_arg);
			if (i != n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(opt_arg);
	printf("\n");
}
