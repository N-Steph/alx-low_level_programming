#include "main.h"
/**
 * print_rev - print string in reverse
 * @s: pointer to the character array of string
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int len;
	int i;
	int NEWLINE;

	NEWLINE = 10;
	
	len = 0;
	while (*s != '\0')
	{
		len++;
		s += 1;
	}
	s -= 1;
	for (i = (len - 1); i >= 0; i--)
	{
		_putchar(*s);
		s -= 1;
	}
	_putchar(NEWLINE);
}
