#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - changes the size of a memory block
 * @ptr: pointer to memory block to change size
 * @old_size: size of memory block to change size
 * @new_size: size of memory block to to change to
 *
 * Return: pointer to memory block of size new_size
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr_new;

	if (ptr == 0 && new_size != 0)
	{
		ptr_new = malloc(new_size);
		return (ptr_new);
	}
	else if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	else if (new_size == 0 && ptr == 0)
	{
		return (0);
	}
	else if (new_size == old_size && new_size != 0 && old_size != 0)
	{
		return (ptr);
	}
	else
	{
		ptr_new = malloc(new_size);
		if (old_size != 0 && (new_size > old_size))
			ptr_new = memcpy(ptr_new, ptr, old_size);
		else if (old_size != 0 && (new_size < old_size))
			ptr_new = memcpy(ptr_new, ptr, new_size);
		return (ptr_new);
	}
}
