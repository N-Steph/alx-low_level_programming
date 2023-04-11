#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatenate two string
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to new allocated memory
 * containing the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int size1;
	int size2;
	int size;
	char *ptr_to_cat_mem;

	if (s1 == 0)
		size1 = 0;
	else
		size1 = strlen(s1);
	if (s2 == 0)
		size2 = 0;
	else
		size2 = strlen(s2);
	size = size1 + size2;
	ptr_to_cat_mem = malloc(sizeof(char) * (size + 1));
	if (ptr_to_cat_mem == 0)
		return (ptr_to_cat_mem);
	if (s1 == 0)
		ptr_to_cat_mem = strcpy(ptr_to_cat_mem, "");
	else
		ptr_to_cat_mem = strcpy(ptr_to_cat_mem, s1);
	if (s2 == 0)
		ptr_to_cat_mem = strcat(ptr_to_cat_mem, "");
	else
		ptr_to_cat_mem = strcat(ptr_to_cat_mem, s2);
	return (ptr_to_cat_mem);
}
