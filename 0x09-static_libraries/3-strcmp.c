#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to first character of string1
 * @s2: pointer to second character of string2
 *
 * Return: 0 (match), other (not match)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			return (*s1 - *s2);
		}
	}
	if (*s2 != '\0')
		return (*s1 - *s2);
	else
		return (0);
}
