#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @needle: substring to locate
 * @haystack: string to locate from
 *
 * Return: pointer to the beginning of the
 * located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int len_of_needle;
	int compat_test;
	char *ptr_haystack;
	char *ptr_needle;

	len_of_needle = _strlen(needle);
	compat_test = 0;
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			ptr_haystack = haystack;
			ptr_needle = needle;
			while (*needle != '\0')
			{
				if (*haystack == *needle)
					compat_test++;
				needle++;
				haystack++;
			}
			haystack = ptr_haystack;
			needle = ptr_needle;
			if (compat_test == len_of_needle)
				return (haystack);
			compat_test = 0;
		}
	}
	return (0);
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
	int len;
	char *ptrs;

	ptrs = s;
	len = 0;
	while (*ptrs != '\0')
	{
		len++;
		ptrs += 1;
	}
	return (len);
}
