#include "main.h"
/**
 * print_triangle - print triangle
 * @size: size of the triangle
 *
 * This function prints a right angle triangle
 * using # character
 *
 * Return: void
 */
void print_triangle(int size)
{
	int number_of_character;
	int number_of_space;
	int i;
	int SPACE;
	int HASH_CHARACTER;
	int NEWLINE;

	NEWLINE = 10;
	SPACE = 32;
	HASH_CHARACTER = 35;
	number_of_character = 1;
	number_of_space = size - 1;
	if (size > 0)
	{
		while (number_of_space >= 0)
		{
			for (i = 0; i < number_of_space; i++)
				_putchar(SPACE);
			for (i = 0; i < number_of_character; i++)
				_putchar(HASH_CHARACTER);
			number_of_space--;
			number_of_character++;
			_putchar(NEWLINE);
		}
	}
	else
	{
		_putchar(NEWLINE);
	}
}
