#include "main.h"
/**
 * rev_string - reverse string
 * @s: pointer to first character array of string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char *ptr1;
	char *ptr2;
	char temp;
	int len;
	int i;

	len = 0;
	ptr1 = s;
	while (*s != '\0')
	{
		s += 1;
		len++;
	}
	ptr2 = s - 1;
	for (i = 0; i < len / 2 ; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
		ptr1 += 1;
		ptr2 -= 1;
	}
}
