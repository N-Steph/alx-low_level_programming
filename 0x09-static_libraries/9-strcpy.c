#include "main.h"
/**
 * _strcpy - copy string
 * @src: source
 * @dest: destination
 *
 * This function copies the content of src array
 * to dest array
 *
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	char *ptrdest;

	ptrdest = dest;
	while (*src != '\0')
	{
		*ptrdest = *src;
		src += 1;
		ptrdest += 1;
	}
	*ptrdest = *src;
	return (dest);
}
