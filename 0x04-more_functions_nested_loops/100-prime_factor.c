#include <stdio.h>
/**
 * main - Entry point
 *
 * This program prints out the largest prime factor
 * of a number
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;
	int prime_number;
	int largest_prime_factor;
	long int NUM;

	number = 2;
	largest_prime_factor = 0;
	NUM = 612852475143;
	while (number <= NUM)
	{
		if (number == 2 || number == 3 || number == 5 || number == 7 || number == 11 || number == 13)
		{
			prime_number = number;
			if (NUM % prime_number == 0)
			{
				largest_prime_factor = prime_number;
				NUM /= prime_number;
			}
		}
		else if (number % 2 != 0 || number % 3 != 0 || number % 5 != 0 || number % 7 != 0 || number % 11 != 0 || number % 13 != 0)
		{
			prime_number = number;
			if (NUM % prime_number == 0)
			{
				largest_prime_factor = prime_number;
				NUM /= prime_number;
			}
		}
		number++;
	}
	printf("%d\n", largest_prime_factor);
	return (0);
}
