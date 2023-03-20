#include <stdio.h>
/**
 * main - Entry point
 *
 * This program prints all possible
 * combinations of two digits
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int first_digit;
	int second_digit;
	int lower_bound;
	int upper_bound;
	int comma;
	int space;
	int newline;

	first_digit = 48;
	second_digit = 48;
	lower_bound = 48;
	upper_bound = 57;
	comma = 44;
	space = 32;
	newline = 10;

	while (first_digit < (upper_bound + 1))
	{
		if (second_digit > first_digit)
		{
			putchar(first_digit);
			putchar(second_digit);
			if (first_digit != upper_bound - 1 || second_digit != upper_bound)
			{
				putchar(comma);
				putchar(space);
			}
		}
		second_digit++;
		if (second_digit > upper_bound)
		{
			first_digit++;
			second_digit = 0;
		}
	}
	putchar(newline);
	return (0);
}
