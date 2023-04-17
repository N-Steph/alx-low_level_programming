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
	dog_t *ptr_temp;

	ptr_new_dog = malloc(sizeof(char *) * 2 + sizeof(float));
	if (ptr_new_dog == 0)
		return (0);
	ptr_temp = ptr_new_dog;
	(*ptr_temp).name = name;
	(*ptr_temp).owner = owner;
	(*ptr_temp).age = age;
	return (ptr_new_dog);
}
