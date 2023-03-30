#include "main.h"

/**
 * string_toupper - changes lowercase characters
 * to their uppercase chararcter.
 * @s: pointer to first character of string
 *
 * Return: s
 */
char *string_toupper(char *s)
{
	char *ptrs;

	ptrs = s;
	while (*ptrs != '\0')
	{
		if (*ptrs >= 97 && *ptrs <= 122)
			*ptrs = *ptrs - 32;
		ptrs++;
	}
	return (s);
}
