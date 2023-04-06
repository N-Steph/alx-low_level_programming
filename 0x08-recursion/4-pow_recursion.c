#include "main.h"

/**
 * _pow_recursion - power function
 * @x: base number
 * @y: power number
 *
 * This function returns the value of x raised
 * ot the power of y.
 *
 * Return: return the value of x to the power y on
 * success,
 * return -1 if power is negative.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
