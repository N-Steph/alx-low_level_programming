#include "main.h"
#include <stdint.h>

/**
 * _atoi - convert string to integer
 * @s: pointer to first character of string
 *
 * Return: number in the string. 0 if there
 * is no number.
 */
int _atoi(char *s)
{
	int sign;
	int counter;
	int64_t number;

	sign = 1;
	number = 0;
	counter = 0;
	while (*s != '\0')
	{
		if (*s == '-')
		{
			sign *= -1;
			s++;
			continue;
		}
		else if (*s >= '0' && *s <= '9')
		{
			if (counter != 0)
				number *= 10;
			number += *s - '0';
			counter += 1;
			s++;
			if (*s >= '0' && *s <= '9')
				continue;
			else
				break;
		}
		s++;
	}
	number = number * sign;
	return (number);
}
