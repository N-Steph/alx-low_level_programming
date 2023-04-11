#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * argstostr - concatenates all the arguments of program
 * @ac: argument count
 * @av: pointer to array of string
 *
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char **ptr_temp0;
	char *ptr_temp1;
	char *ptr_concat;
	int size;
	int i;

	if (av == 0 || ac == 0)
		return (0);
	size = 0;
	ptr_temp0 = av;
	for (i = 1; i < ac; i++)
	{
		size += strlen(*ptr_temp0);
		ptr_temp0++;
	}
	ptr_concat = malloc((sizeof(char) * (size + ac)) + sizeof(char));
	if (ptr_concat == 0)
		return (0);
	ptr_temp1 = ptr_concat;
	for (i = 0; i < ac; i++)
	{
		ptr_temp1 = strcpy(ptr_temp1, *av);
		ptr_temp1 += strlen(*av);
		*ptr_temp1 = '\n';
		ptr_temp1++;
		av++;
	}
	*ptr_temp1 = '\0';
	return (ptr_concat);
}
