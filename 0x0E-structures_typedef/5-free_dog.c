#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs
 * @d: pointer to variable of type dog_t
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free(d);
}
