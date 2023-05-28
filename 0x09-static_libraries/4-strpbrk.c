#include "main.h"
#include <string.h>

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

	length_of_substring = strlen(accept);
	smallest_char_loc = accept;
	counter = 0;
	for (i = 0; i < length_of_substring + 1; i++)
	{
		current_char_loc = strchr(s, *accept);
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
