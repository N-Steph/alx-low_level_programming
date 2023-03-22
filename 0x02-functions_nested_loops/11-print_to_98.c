#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from any number to 98
 * @n: number from where printing start
 *
 * This program prints n followed by subsequent
 * numbers to 98, in ascending order
 *
 * Return: void
 */
void print_to_98(int n)
{
	int state;

	state = 1;
	while (state)
	{
		if (n == 98)
		{
			printf("%d\n", n);
		}
		else
		{
			while (n != 98)
			{
				printf("%d", n);
				if (n < 98)
					n++;
				else if (n > 98)
					n--;
				if (n == 98)
					printf(", %d\n", n);
				else
					printf(", ");
			}
		}
		state = 0;
	}
}
