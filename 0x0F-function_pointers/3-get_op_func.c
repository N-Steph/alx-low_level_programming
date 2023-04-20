#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - select correct function
 * @s: operator
 *
 * This function selects the correct function to
 * perform the operation asked by the user
 *
 * Return: pointer to the corresponding function
 */
func_ptr get_op_func(char *s)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*s == (*ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
