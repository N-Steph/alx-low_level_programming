#include "main.h"

/**
 * _puts_recursion - prints a string to stdout.
 * @s: pointer to first character of string.
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	int NEWLINE;
	
	NEWLINE = 10;
	if (*s == '\0')
	{
		_putchar(NEWLINE);
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
