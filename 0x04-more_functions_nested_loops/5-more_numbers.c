#include "main.h"
/**
 * more_number - print from 1 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int digit1;
	int digit2;
	int NEWLINE;
	int i;

	digit1 = 48;
	digit2 = 47;
	NEWLINE = 10;
	for (i = 0; i < 10; i++)
	{
		while (digit2 != 49 || digit1 != 53)
		{
			if (digit2 >= 48)
				_putchar(digit2);
			_putchar(digit1);
			digit1++;
			if (digit1 > 57)
			{
				digit1 = 48;
				digit2 = 49;
			}
		}
		digit1 = 48;
		digit2 = 47;
		_putchar(NEWLINE);
	}
}

