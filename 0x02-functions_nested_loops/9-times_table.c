#include "main.h"
/**
 * times_table - print time table
 *
 * This program prints the 9 times table,
 * starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int factor1 = 0;
	int factor2 = 0;
	int multiple = 0;
	int first_digit;
	int second_digit;

	while (factor1 < 10)
	{
		while (factor2 < 10)
		{
			multiple = factor1 * factor2;
			first_digit = multiple / 10;
			second_digit = multiple % 10;
			if (first_digit == 0 && factor2 > 0)
				_putchar(32);
			else if (first_digit != 0)
				_putchar('0' + first_digit);
			_putchar('0' + second_digit);
			factor2++;
			if (factor2 < 10)
			{
				_putchar(44);
				_putchar(32);
			}
		}
		_putchar(10);
		factor2 = 0;
		factor1++;
	}
}
