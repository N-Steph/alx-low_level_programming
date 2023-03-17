#include <stdio.h>
/**
 * main - Entry point
 *
 * This program prints out the alphabet
 * using the putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch < 123)
	{
		putchar(ch);
		ch++;
	}
	ch = 10;
	putchar(ch);
	return (0);
}
