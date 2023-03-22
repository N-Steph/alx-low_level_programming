#include "main.h"
/**
 * jack_bauer - prints minutes and hour
 *
 * This program prints the minutes and hours of
 * a day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int digit1 = 48;
	int digit2 = 48;
	int digit3 = 48;
	int digit4 = 48;

	while (digit4 != 50 || digit3 != 52)
	{
		while (digit2 < 53 || digit1 < 58)
		{
			if (digit1 > 57)
			{
				digit2++;
				digit1 = 48;
			}
			_putchar(digit4);
			_putchar(digit3);
			_putchar(58);
			_putchar(digit2);
			_putchar(digit1);
			_putchar(10);
			digit1++;
		}
		digit3++;
		if (digit3 > 57)
		{
			digit4++;
			digit3 = 48;
		}
		digit2 = 48;
		digit1 = 48;
	}
}
