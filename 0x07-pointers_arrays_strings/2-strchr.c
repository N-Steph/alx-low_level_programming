#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to first character of string
 * @c: character to locate
 *
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		s++;
		if (*s == '\0')
		{
			s = 0;
			return (s);
		}
	}

	return (s);
}
