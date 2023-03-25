#include "main.h"
/**
 * print_most_numbers - print digit except 2 and 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int digit;
	int NEWLINE;

	NEWLINE = 10;
	digit = 48;
	while (digit >= 48 && digit <= 57)
	{
		if ((digit != 50 || digit == 52) && (digit == 50 || digit != 52))
			_putchar(digit);
		digit++;
	}
	_putchar(NEWLINE);
}
