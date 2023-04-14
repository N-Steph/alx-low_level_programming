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
		size_nconcat += strlen(s2);

	ptr_char = malloc_checked(sizeof(char) * (size_nconcat + 1));
	strcpy(ptr_char, s1);
	strncat(ptr_char, s2, n);
	return (ptr_char);
}

/**
 * malloc_checked - allocates memory
 * @b: number of bytes to allocate
 *
 * Return: pointer to memory allocated
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == 0)
		exit(0);
	return (ptr);
}
