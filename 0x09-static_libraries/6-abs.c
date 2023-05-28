#include "main.h"
/**
 * _abs - print absolute value
 * @num: return absolute value of num
 *
 * This program returns the absolute value of
 * any number
 *
 * Return: absolute value of num
 */
int _abs(int num)
{
	if (num < 0)
	{
		num = num * -1;
		return (num);
	}
	else if (num > 0)
	{
		return (num);
	}
	else
	{
		return (0);
	}
}
