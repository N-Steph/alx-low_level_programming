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
	char *ptr_name;
	char *ptr_owner;

	ptr_new_dog = malloc(sizeof(char *) * 2 + sizeof(float));
	ptr_name = malloc(sizeof(char) * (strlen(name) + 1));
	ptr_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (ptr_new_dog == 0 || ptr_name == 0 || ptr_owner == 0)
		return (0);
	ptr_temp = ptr_new_dog;
	strcpy(ptr_name, name);
	strcpy(ptr_owner, owner);
	(*ptr_temp).name = ptr_name;
	(*ptr_temp).owner = ptr_owner;
	(*ptr_temp).age = age;
	return (ptr_new_dog);
}
