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
	int multiple_of_3;
	int multiple_of_5;

	multiple_of_3 = 0;
	multiple_of_5 = 0;
	while ((multiple_of_3 < 1024) && (multiple_of_5 < 1024))
	{
		multiple_of_3 += 3;
		multiple_of_5 += 5;
		if (multiple_of_3 < 1024)
			sum += multiple_of_3;
		if (multiple_of_5 < 1024)
			sum += multiple_of_5;
	}
	printf("%d\n", sum);
	return (0);
}
