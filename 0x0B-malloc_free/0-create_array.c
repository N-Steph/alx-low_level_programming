#include "main.h"
#include <stdlib.h>

/**
 * create_array - create and fill an array
 * @size: size of the array to be created
 * @c: character use to full the array
 *
 * Return: pointer to array (Success),
 * null pointer (failure)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr_to_created_array;
	char *ptr_temp;
	unsigned int i;

	if (size == 0)
	{
		ptr_to_created_array = 0;
	}
	else
	{
		ptr_to_created_array = malloc(sizeof(char) * size);
		if (ptr_to_created_array == 0)
			return (ptr_to_created_array);
		ptr_temp = ptr_to_created_array;
		for (i = 0; i < size; i++)
		{
			*ptr_temp = c;
			ptr_temp++;
		}
	}
	return (ptr_to_created_array);
}
