#include "main.h"
/**
 * _isupper - check if character is uppercase
 * @c: character being check
 *
 * Return: 1 (Success), 0 otherwise
 */
int _isupper(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
