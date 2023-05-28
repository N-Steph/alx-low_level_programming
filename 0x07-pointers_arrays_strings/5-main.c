#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *t;

	t = _strstr("First, solve the problem. Then, write the code.", "School");
	if (t == NULL)
	{
		printf("I am pointer to null\n");
		return (0);
	}
	printf("%s\n", t);
	return (0);
}
