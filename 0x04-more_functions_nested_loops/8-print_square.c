#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 *
 * This program prints a square using the # character
 *
 * Return: void
 */
void print_square(int size)
{
	int line_number = 0;
	int character_number = 0;
	int HASH_CHARACTER = 35;
	int NEWLINE = 10;

	if (size > 0)
	{
		while (line_number < size)
		{
			while (character_number < size)
			{
				_putchar(HASH_CHARACTER);
				character_number++;
			}
			_putchar(NEWLINE);
			line_number++;
			character_number = 0;
		}
	}
	else
	{
		_putchar(NEWLINE);
	}
}
