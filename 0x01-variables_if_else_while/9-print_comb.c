#include <stdio.h>
/**
 * main - Entry point
 *
 * This program prints all possible combinations of
 * single-digit numbers
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int int_to_char; /*Stors the decimal value of digit character */
	int comma;
	int space;
	int last_digit;

	int_to_char = 48; /*initialization*/
	comma = 44;
	space = 32;
	last_digit = 57;

	while (int_to_char <= last_digit)
	{
		putchar(int_to_char);
		int_to_char++;
		if (int_to_char <= last_digit)
		{
			putchar(comma);
			putchar(space);
		}
	}
	putchar(10);
	return (0);
}
