#include "main.h"

/**
 * is_palindrome - determine if string is palindrome
 * @s: pointer to first character of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int verdict;
	char *rightmost_ptr;
	char *leftmost_ptr;

	leftmost_ptr = s;
	rightmost_ptr = mv_to_last_char(s);
	verdict = is_palindrome_helper(leftmost_ptr, rightmost_ptr);
	return (verdict);
}

/**
 * mv_to_last_char - point to last char of a string
 * @s: pointer to first char of string
 *
 * Return: pointer to last char of string
 */
char *mv_to_last_char(char *s)
{
	char *ptr_return;

	if (*s == '\0')
	{
		return (s - 1);
	}
	else
	{
		s++;
		ptr_return = mv_to_last_char(s);
		return (ptr_return);
	}
}

/**
 * is_palindrome_helper - check if string is palindrome
 * @s1: point to first character of string
 * @s2: point to second character of string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s1, char *s2)
{
	int value_return;

	if (*s1 == *s2)
	{
		if ((s1 == s2 || s1 + 1 == s2))
		{
			return (1);
		}
		else
		{
			s1++;
			s2--;
			value_return = is_palindrome_helper(s1, s2);
			return (value_return);
		}
	}
	else
	{
		return (0);
	}
}
