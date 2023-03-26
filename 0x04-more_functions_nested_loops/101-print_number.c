#include "main.h"
/**
 * print_number - print number to standard output
 * @n: number being printed
 *
 * Return: void
 */
void print_number(int n)
{
	int divisor;
	int counter;
	int quotient;
	int i;
	int START;
	int MINUS_SIGN;

	START = 48;
	MINUS_SIGN = 45;
	divisor = 10;
	counter = 0;
	if (n < 0)
	{
		_putchar(MINUS_SIGN);
		n *= -1;
	}
	do {
		quotient = n / divisor;
		counter++;
		divisor *= 10;
	} while (quotient != 0);
	i = 1;
	divisor = 1;
	while (i < counter)
	{
		divisor *= 10;
		i++;
	}
	while (divisor != 0)
	{
		quotient = n / divisor;
		_putchar(START + quotient);
		if (quotient != 0)
			n -= quotient * divisor;
		divisor /= 10;
	}
}
