#include <stdio.h>

/**
 * b_main - prints message before main() execution.
 *
 * Return: nothing
 */
void b_main(void) __attribute((constructor));
void b_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
