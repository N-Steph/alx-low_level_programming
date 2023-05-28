#include "main.h"
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
	char *ptr_temp;

	len = 0;
	ptr_temp = s
	while (*ptr_temp != '\0')
	{
		len++;
		ptr_temp += 1;
	}
	return (len);
}
