#include <stdio.h>
/**
 * main - Entry point
 *
 * This program prints all single digit
 * of base 10 starting from 0, using the
 * putchar function
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	int n;

	for (i = 48; i < 58; i++)
		putchar(i);
	putchar(10);
	return (0);
}
