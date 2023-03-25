#include "main.h"
/**
 * print_line - draw straight line in terminal
 * @n: number of times "_" is printed
 *
 * This function draw a straight line in the terminal,
 * by printing "_" n number of times
 * Return: void
 */
void print_line(int n)
{
	int counter;
	int NEWLINE;
	int UNDERSCORE;

	counter = 0;
	NEWLINE = 10;
	UNDERSCORE = 95;
	if (n > 0)
	{
		while (counter < n)
		{
			_putchar(UNDERSCORE);
			counter++;
		}
	}
	_putchar(NEWLINE);
}
