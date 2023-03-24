#include "main.h"
/**
 * _isdigit - check if digit
 * @c: number being check
 *
 * Return: 1 (Success), 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
