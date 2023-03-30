#include "main.h"

/**
 * cap_string - Capitalize every word in a string
 * @s: pointer to first character of string
 *
 * Return: s;
 */
char *cap_string(char *s)
{
	char word_separator[13] = {' ', '\t', '\n', ',', '.', '!',
		'?', '"', '(', ')', '{', '}'};
	char *ptrs;
	int i;

	ptrs = s;
	if (*ptrs >= 97 && *ptrs <= 122)
		*ptrs = *ptrs - 32;
	for (i = 0; i < 13; i++)
	{
		while (*ptrs != '\0')
		{
			if (*ptrs == '\t')
				*ptrs = ' ';
			if (*ptrs == word_separator[i])
			{
				ptrs++;
				if (*ptrs != '\0' && (*ptrs >= 97 && *ptrs <= 122))
					*ptrs = *ptrs - 32;
			}
			ptrs++;
		}
		ptrs = s;
	}
	return (s);
}
