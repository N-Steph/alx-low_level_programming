#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - create and initialize a variable of type dog_t
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr_new_dog;

	ptr_new_dog = malloc(sizeof(dog_t));
	if (ptr_new_dog == 0)
		return (0);
	(*ptr_new_dog).name = name;
	(*ptr_new_dog).owner = owner;
	(*ptr_new_dog).age = age;
	return (ptr_new_dog);
}
