#include "main.h"
/**
 * put2 - print every other character of a string
 * @str: pointer to first element of character array of string
 *
 * return: nothing
 */
void puts2(char *str)
{
	int NEWLINE;

	NEWLINE = 10;
	while (*str != '\0')
	{
		_putchar(*str);
		str += 2;
	}
	_putchar(NEWLINE);
}
