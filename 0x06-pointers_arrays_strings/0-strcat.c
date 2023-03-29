#include "main.h"
/**
 * _strcat: concatenate two strings
 * @src: points to string1
 * @dest: points to string2
 *
 * This pogram append string1 to string2.
 *
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptrdest;

	ptrdest = dest;
	while (*ptrdest != '\0')
		ptrdest += 1;
	while (*src != '\0')
	{
		*ptrdest = *src;
		ptrdest += 1;
		src += 1;
	}
	*ptrdest = '\0';

	return (dest);
}
