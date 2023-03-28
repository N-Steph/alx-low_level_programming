#include "main.h"
/**
 * _puts - prints string to stdout
 * @str: pointer to the character array of string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int NEWLINE;

	NEWLINE = 10;
	while (*str != '\0')
	{
		_putchar(*str);
		str += 1;
	}
	_putchar(NEWLINE);
}
