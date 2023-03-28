#include "main.h"
/**
 * swap_int - swqp value of two int variables
 * @a: pointer to first int value
 * @b: pointer to second int value
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int var3;

	var3 = *b;
	*b = *a;
	*a = var3;
}
