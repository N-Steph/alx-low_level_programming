#include "main.h"
/**
 * puts_half - print the second half of string
 * @str: pointer to first element of string in character array
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int len;
	int NEWLINE;
	char *ptr;

	ptr = str;
	NEWLINE = 10;
	len = 0;
	while (*ptr != '\0')
	{
		len++;
		ptr += 1;
	}
	if (len % 2 == 0)
		str = str + len / 2;
	else
		str = str + 1;
	while (*str != '\0')
	{
		_putchar(*str);
		str += 1;
	}
	_putchar(NEWLINE);
}
