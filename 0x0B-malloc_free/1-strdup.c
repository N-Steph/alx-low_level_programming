#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _strdup - copy a string into another memory area
 * @str: pointer to string
 *
 * Return: pointer to memory location where string
 * was copied (Success), NULL if str=NULL or if
 * insufficient memory was available.
 */
char *_strdup(char *str)
{
	int size;
	char *ptr_to_cp_mem;
	char *ptr_temp;
	int i;

	if (str == 0)
	{
		ptr_to_cp_mem = 0;
	}
	else
	{
		size = strlen(str);
		ptr_to_cp_mem = malloc(sizeof(char) * (size + 1));
		if (ptr_to_cp_mem == 0)
			return (ptr_to_cp_mem);
		ptr_temp = ptr_to_cp_mem;
		for (i = 0; i < (size + 1); i++)
		{
			*ptr_temp = *str;
			ptr_temp++;
			str++;
		}
	}
	return (ptr_to_cp_mem);
}
