#include <stdarg.h>

/**
 * sum_them_all - sum all its parameters
 * @n: number of parameters to sum
 *
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list opt_arg;

	va_start(opt_arg, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(opt_arg, int);
	va_end(opt_arg);
	return (sum);
}
