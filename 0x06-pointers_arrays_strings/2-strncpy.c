#include "main.h"
/**
 * _strncpy - copy string
 * @dest: pointer to string2
 * @src: pointer to string1
 * @n: number of characters to be copied
 *
 * This function copies n number of characters from
 * string1 to string2.
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptrdest;
	char *ptrsrc;
	int len;
	int counter;
	int number_of_characters;

	ptrdest = dest;
	ptrsrc = src;
	len = 0;
	counter = 0;
	while (*ptrsrc != '\0')
	{
		ptrsrc += 1;
		len++;
	}
	if (len < n)
		number_of_characters = len;
	else
		number_of_characters = n;
	while (counter < number_of_characters)
	{
		*ptrdest = *src;
		ptrdest += 1;
		src += 1;
		counter++;
	}
	if (*src == '\0')
		*ptrdest = *src;
	return (dest);
}
