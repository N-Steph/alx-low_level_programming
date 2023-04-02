#include <stdio.h>
/**
 * main - Entry point
 *
 * This program compute and prints the sum
 * of multiples of 3 or 5
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int sum;
	int number;

	number = 0;
	while (number < 1024)
	{
		if (number % 3 == 0 || number % 5 == 0)
			sum += number;
		number++;
	}
	printf("%d\n", sum);
	return (0);
}
