#include <stdio.h>
/**
 * main - Entry point
 *
 * This program prints out the alphabet
 * in reverse order
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	ch = 10;
	putchar(ch);
	return (0);
}
