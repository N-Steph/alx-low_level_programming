#include "main.h"

/**
 * _sqrt_recursion - calculate natural square root
 * @n: number to find the square root.
 *
 * Return: square root of n, or -1 if n has no square
 * root.
 */
int _sqrt_recursion(int n)
{
	int answer;
	int sqrt;

	sqrt = 0;
	answer = sqrt_help(n, sqrt);
	return (answer);
}

/**
 * sqrt_help - help calculate square root of a number.
 * @n: number to find square root
 * @sqrt: positive square root
 *
 * This function will test different values of sqrt
 * and check if their square equals n.
 *
 * Return: sqrt
 */
int sqrt_help(int n, int sqrt)
{
	int result;
	int answer;

	if (sqrt > n / 2 && n != 1)
	{
		return (-1);
	}
	else
	{
		result = sqrt * sqrt;
		if (result == n)
		{
			return (sqrt);
		}
		else
		{
			sqrt++;
			answer = sqrt_help(n, sqrt);
			return (answer);
		}
	}
}
