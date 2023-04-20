#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: pointer to string
 * @f: pointer to function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
		exit(1);
	(*f)(name);
}
