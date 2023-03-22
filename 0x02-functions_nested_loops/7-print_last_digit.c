#include "main.h"
/**
 * print_last_digit - print last digit
 * @num: extract last digit of num
 *
 * This program prints out and return the
 * last digit of an integer
 *
 * Return: last digit
 */
int print_last_digit(int num)
{
	int last_digit;

	last_digit = num % 10;
	if (last_digit < 0)
		last_digit = last_digit * -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
