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
	int counter;
	int len;

	ptrdest = dest;
	ptrsrc = src;
	counter = 0;
	len = 0;
	while (*ptrsrc != '\0')
	{
		ptrsrc += 1;
		len++;
	}
	while (counter < n)
	{
		if (counter > len)
		{
			*ptrdest = '\0';
		}
		else
		{
			*ptrdest = *src;
			src += 1;
		}
		ptrdest += 1;
		counter++;
	}
	return (dest);
}
