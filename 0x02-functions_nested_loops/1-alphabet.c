#include "main.h"
/**
 * print_alphabet - prints the alphabet
 *
 * This functions prints all the alphabet letters in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int letter = 97;
	int newline = 10;

	while (letter < 123)
	{
		_putchar(letter);
		letter++;
	}
	_putchar(newline);
}
