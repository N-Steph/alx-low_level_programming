#include "main.h"
/**
 * print_alphabet_x10 - print alphabet
 *
 * This function prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int letter;
	int counter;
	int newline;

	letter = 97;
	counter = 0;
	newline = 10;
	while (counter < 10)
	{
		while (letter < 123)
		{
			_putchar(letter);
			letter++;
		}
		_putchar(newline);
		letter = 97;
		counter++;
	}
}
