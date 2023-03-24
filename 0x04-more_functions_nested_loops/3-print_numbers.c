#include "main.h"
/**
 * print_numbers - print all digits
 *
 * Return: void
 */
void print_numbers(void)
{
	int digit;
	int NEWLINE;

	NEWLINE = 10;
	digit = 48;
	while (digit >= 48 && digit <= 57)
	{
		_putchar(digit);
		digit++;
	}
	_putchar(NEWLINE);
}
