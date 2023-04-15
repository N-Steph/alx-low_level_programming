#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate two string
 * @s1: pointer to first string
 * @s2: pointer to second sring
 * @n: number of character of s2 to concatenate
 * to s1
 *
 * Description: This function concatenate at most n
 * bytesof s2 to s2 in another memeory location
 *
 * Return: pointer to allocated memory location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr_char;
	unsigned int size_nconcat;

	size_nconcat = 0;
	if (s1 == 0)
		size_nconcat += 0;
	else
		size_nconcat += strlen(s1);
	if (s2 == 0)
		size_nconcat += 0;
	else
		size_nconcat += n;

	if (size_nconcat == 0)
		return (0);
	ptr_char = malloc(sizeof(char) * (size_nconcat + 1));
	if (ptr_char == 0)
		return (0);
	strcpy(ptr_char, s1);
	if (n != 0 && s2 != 0)
		strncat(ptr_char, s2, n);
	return (ptr_char);
}
