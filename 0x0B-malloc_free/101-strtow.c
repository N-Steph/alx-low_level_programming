#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * count_characters - count the number of characters in a
 * word
 * @str: pointer to string
 *
 * Return: number of characters
 */
int count_characters(char *str)
{
	int num_character;
	char *ptr1;
	char *ptr2;

	num_character = 0;
	ptr1 = str;
	ptr2 = str;
	while (*ptr1 != '\0')
	{
		if (*ptr1 >= 33 && *ptr1 <= 126)
		{
			while (*ptr2 >= 33 && *ptr2 <= 126)
			{
				num_character += 1;
				if (*ptr2 == 32)
					break;
				ptr2++;
			}
			if (*ptr2 == 32)
				break;
		}
		ptr1++;
		ptr2 = ptr1;
	}
	return (num_character);
}


/**
 * count_words - count the number of words in a string
 * @str: pointer to string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	char *ptr1;
	char *ptr2;
	int num_words;

	ptr1 = str;
	ptr2 = str;
	while (*ptr1 != '\0')
	{
		if (*ptr1 >= 33 && *ptr1 <= 126)
		{
			while (*ptr2 != '\0')
			{
				if (*ptr2 == 32)
					break;
				ptr2++;
			}
			num_words++;
		}
		ptr1 = ptr2;
		if (*ptr1 == '\0')
			continue;
		while (*ptr1 == 32)
		{
			if (*ptr1 == '\0')
			{
				continue;
			}
			ptr1++;
		}
		ptr2 = ptr1;
	}
	return (num_words);
}

/**
 * strtow - split a string into words
 * @str: pointer to string
 *
 * Return: pointer to pointer
 */
char **strtow(char *str)
{
	unsigned int num_words;
	char **ptr_ptr;
	unsigned int i;
	unsigned int num_characters;

	if (str == 0 || strlen(str) == 0)
		return (0);
	num_words = count_words(str);
	if (num_words == 0)
		return (0);
	ptr_ptr = malloc(sizeof(char *) * (num_words));
	if (ptr_ptr == 0)
		return (0);
	for (i = 0; i < num_words; i++)
	{
		num_characters = count_characters(str);
		*ptr_ptr = malloc(sizeof(char) * (num_characters + 1));
		while (*str <= 32)
		{
			str++;
		}
		strncpy(*ptr_ptr, str, num_characters);
		*(*ptr_ptr + num_characters) = '\0';
		str += num_characters;
		ptr_ptr++;
	}
	*ptr_ptr = 0;
	ptr_ptr -= num_words;
	return (ptr_ptr);
}
