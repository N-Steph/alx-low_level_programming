#include "main.h"

/**
 * _strspn - get length of a prefix substring
 * @s: pointer to first character of string
 * @accept: pointer to first character of substring
 *
 * This function calculate the length of the initial
 * segment of s which consists of entirely of bytes in
 * accepts
 *
 * Return: length of substring of s containing accept
 */
int _strspn(char *s, char *accept)
{
	char *furthest_char_loc;
	char *current_char_loc;
	int length_of_substring;

	length_of_substring = 0;
	furthest_char_loc = s;
	if (*accept == '\0')
		return (length_of_substring);
	while (*accept != '\0')
	{
		current_char_loc = _strchr(s, *accept);
		if (current_char_loc > furthest_char_loc)
			furthest_char_loc = current_char_loc;
		accept++;
	}

	while (s != (furthest_char_loc + 1))
	{
		length_of_substring++;
		s++;
	}

	return (length_of_substring);
}

/**
 * _strchr - locates a character in a string
 * @s: pointer to first character of string
 * @c: character to locate
 *
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	s = 0;
	return (s);
}
