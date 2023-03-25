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
	int limit;

	limit = 100;
	number = 1;
	while (number <= limit)
	{
		if (number % 3 == 0 && number % 5 == 0)
			printf("FizzBuzz");
		else if (number % 3 == 0)
			printf("Fizz");
		else if (number % 5 == 0)
			printf("Buzz");
		else
			printf("%d", number);
		if (number != limit)
			printf(" ");
		number++;
	}
	printf("\n");
	return (0);
}
