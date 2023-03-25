#include "main.h"
/**
 * print_line - draw straight line in terminal
 * @n: number of times "_" is printed
 *
 * This function draw a straight line in the terminal,
 * by printing "_" n number of times
 * Return: void
 */
void print_diagonal(int n)
{
	int counter;
	int NEWLINE;
	int BACKSLASH;

	counter = 0;
	NEWLINE = 10;
        BACKSLASH = 92;
       	if (n > 0)
	{
		while (counter < n)
		{
			_putchar(BACKSLASH);
			_putchar(NEWLINE);
			counter++;
		}
	}
	_putchar(NEWLINE);
}
