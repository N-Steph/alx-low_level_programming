#include "main.h"
/**
 * print_diagonal - draw diagonal line in terminal
 * @n: number of times "\\" is printed
 *
 * This function draw a diagonal line in the terminal,
 * by printing "\\" n number of times.
 * Return: void
 */
void print_diagonal(int n)
{
	int counter;
	int NEWLINE;
	int BACKSLASH;
	int  i;
	int SPACE;

	counter = 0;
	NEWLINE = 10;
	BACKSLASH = 92;
	i = 0;
	SPACE = 32;
	if (n > 0)
	{
		while (counter < n)
		{
			while (i < counter)
			{
				_putchar(SPACE);
				i++;
			}
			_putchar(BACKSLASH);
			_putchar(NEWLINE);
			counter++;
			i = 0;
		}
	}
	else
	{
		_putchar(NEWLINE);
	}
}
