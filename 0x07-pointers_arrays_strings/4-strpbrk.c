#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes.
 * @s: pointer to first character of string
 * @accept: pointer to first character of substring
 *
 * Return: length of substring of s containing accept
 */
char *_strpbrk(char *s, char *accept)
{
	char *smallest_char_loc;
	char *current_char_loc;
	int length_of_substring;
	int i;
	int counter;

	length_of_substring = _strlen(accept);
	smallest_char_loc = accept;
	counter = 0;
	for (i = 0; i < length_of_substring + 1; i++)
	{
		current_char_loc = _strchr(s, *accept);
		if (current_char_loc == 0)
			counter++;
		if (current_char_loc <= smallest_char_loc && current_char_loc != 0)
			smallest_char_loc = current_char_loc;
		accept++;
	}
	if (counter == length_of_substring)
		smallest_char_loc = 0;
	return (smallest_char_loc);
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
	char *ptrs;

	ptrs = s;
	while (*ptrs != '\0')
	{
		if (*ptrs == c)
			return (ptrs);
		ptrs++;
	}
	if (*ptrs == c)
	{
		return (ptrs);
	}
	else
	{
		ptrs = 0;
		return (ptrs);
	}
}

/**
 * _strlen - determine the length of a string
 * @s: pointer to the array of character containing
 * the string
 *
 * This function counts the number of bytes in a string
 * except the '\0' character.
 *
 * Return: len (number of bytes)
 */
int _strlen(char *s)
{
	char *ptrs;
	int len;

	ptrs = s;
	len = 0;
	while (*ptrs != '\0')
	{
		len++;
		ptrs += 1;
	}
	return (len);
}
