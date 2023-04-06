#include "main.h"

/**
 * _strlen_recursion - calculate lenght of string
 * @s: pointer pointing to the string
 *
 * This function calculates the length of the string
 * pointed by s, excluding the terminating null byte.
 *
 * Return: len_string.
 */
int _strlen_recursion(char *s)
{
	int len_string;

	len_string = 0;
	if (*s == '\0')
		return (0);
	len_string++;
	s++;
	return (len_string + _strlen_recursion(s));
}
