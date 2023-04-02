#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of times table to print
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int multiplier = 0;
	int multiplicand = 0;
	int digit1;
	int digit2;
	int digit3;
	int result;

	if (n >= 0 && n <= 15)
	{
		while (multiplier <= n)
		{
			do {
				result = multiplier * multiplicand;
				digit1 = result / 100;
				if (digit1 == 0 && multiplicand > 0)
					_putchar(32);
				else if (multiplicand > 0)
				{
					_putchar('0' + digit1);
					result -= digit1 * 100;
				}
				digit2 = result / 10;
				if (digit2 == 0 && digit1 == 0 && multiplicand > 0)
					_putchar(32);
				else if (multiplicand > 0)
				{
					_putchar('0' + digit2);
					result -= digit2 * 10;
				}
				digit3 = result;
				_putchar('0' + digit3);
				multiplicand++;
				if (multiplicand <= n)
				{
					_putchar(44);
					_putchar(32);
				}
			} while (multiplicand <= n);
			multiplier++;
			multiplicand = 0;
			_putchar(10);
		}
	}
}
