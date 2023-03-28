#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: pointer to first element of character array of string
 *
 * return: nothing
 */
void puts2(char *str)
{
	int NEWLINE;
	int counter;

	NEWLINE = 10;
	counter = 0;
	while (*str != '\0')
	{
		if (counter % 2 == 0)
			_putchar(*str);
		str += 1;
		counter += 1;
	}
	_putchar(NEWLINE);
}
