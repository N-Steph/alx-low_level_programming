#include <stdio.h>
/**
 * main - Entry point
 *
 * This program print from 1 to 100,
 * replacing multiples of 3 by Fizz,
 * multiples of 5 by Buzz, and multiples
 * of both 3 and 5 by FizzBuzz.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz ");
		else if (number % 3 == 0)
			printf("Fizz ");
		else if (number % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", number);
		number++;
	}
	printf("\b");
	printf("\n");
	return (0);
}
