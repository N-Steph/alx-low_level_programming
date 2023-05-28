#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * count_words - count the number of words in a string
 * @str: pointer to first character of string
 *
 * Return: number of words
 */
int count_words(char *str)
{
	int num_word;
	char *ptr1;
	char *ptr2;
	int len;

	len = strlen(str);
	ptr1 = malloc(sizeof(char) * (len + 1));
	if (ptr1 == 0)
		return (0);
	strcpy(ptr1, str);
	num_word = 0;
	ptr2 = ptr1;
	while (*ptr1 != '\0')
	{
		if ((*ptr1 >= '0' && *ptr1 <= '9') ||
				(*ptr1 >= 'A' && *ptr1 <= 'Z') ||
				(*ptr1 >= 'a' && *ptr1 <= 'z'))
		{
			printf("if yes");
			while (*ptr2 != 32 || *ptr2 != 0)
				ptr2++;
			num_word++;
		}
		while (!(*ptr1 >= 48 && *ptr1 <= 57) ||
				!(*ptr1 >= 65 && *ptr1 <= 90) ||
				!(*ptr1 >= 97 && *ptr1 <= 122) ||
				(*ptr1 != 0))
			ptr1++;
		ptr2 = ptr1;
	}
	return (num_word);
}
