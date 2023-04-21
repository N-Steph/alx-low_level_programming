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
	if (separator == NULL)
		return;
	if (n == 0)
		return;
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(opt_arg, int), separator);
	printf("%d\n", va_arg(opt_arg, int));
	va_end(opt_arg);
}
