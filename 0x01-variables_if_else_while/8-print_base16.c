#include <stdio.h>
/**
 * main - Entry point
 *
 * This program prints out all the numbers of
 * base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 103; i++)
	{
		if (i == 58)
			i = 97;
		putchar(i);
	}
	putchar(10);
	return (0);
}
