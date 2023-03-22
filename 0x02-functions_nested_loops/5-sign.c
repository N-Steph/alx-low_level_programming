#include "main.h"
/**
 * print_sign - output sign of number
 * @n: value being check
 *
 * This program determines if a number is positive,
 * negative, or zero by printing out its sign
 *
 * Return: 1 (positive), -1 (negative), 0 (null)
 */
int print_sign(int n)
{
	int plus_sign;
	int minus_sign;
	int zero;

	plus_sign = 43;
	minus_sign = 45;
	zero = 48;
	if (n > 0)
	{
		_putchar(plus_sign);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(minus_sign);
		return (-1);
	}
	else
	{
		_putchar(zero);
		return (0);
	}
}
