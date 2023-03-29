#include "main.h"
/**
 * _strcat -  contenate two strings
 * @src: points to string1
 * @dest: points to string2
 * @n: number of character of string1 to append
 * to string2.
 *
 * This program append n number of character of
 * string1 to string2.
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptrdest;
	char *ptrsrc;
	int counter;
	int len;
	int num_character;

	ptrdest = dest;
	ptrsrc = src;
	len = 0;
	counter = 0;
	while (*ptrdest != '\0')
		ptrdest += 1;
	while (*ptrsrc != '\0')
	{
		ptrsrc += 1;
		len++;
	}
	if (len < n)
		num_character = len;
	else
		num_character = n;
	while (counter < num_character)
	{
		*ptrdest = *src;
		ptrdest += 1;
		src += 1;
		counter++;
	}
	*ptrdest = '\0';
	return (dest);
}
