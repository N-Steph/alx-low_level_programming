#include "main.h"

/**
 * is_prime_number - Determine if n is prime or not
 * @n: number
 *
 * Return: 1 (Success), 0 otherwise
 */
int is_prime_number(int n)
{
	int verdict;
	int factor;
	int num_of_factor;

	factor = 1;
	num_of_factor = 0;
	verdict = prime_num_helper(n, factor, num_of_factor);
	return (verdict);
}

/**
 * prime_num_helper - help determine prime number
 * @n: number
 * @factor: possible factors of n
 * @num_of_factor: number of factors of n
 *
 * Return: 1 (Success), 0 otherwise
 */
int prime_num_helper(int n, int factor, int num_of_factor)
{
	int value_return;

	if (n <= 1)
	{
		return (0);
	}
	else if (factor >= n / 2 && num_of_factor < 2)
	{
		return (1);
	}
	else if (n % factor == 0)
	{
		num_of_factor++;
		if (num_of_factor > 2)
			return (0);
	}
	factor++;
	value_return = prime_num_helper(n, factor, num_of_factor);
	return (value_return);
}
