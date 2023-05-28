#include "main.h"
/**
 * _islower - return 1 for lowercas character
 * @c: The character to be check
 *
 * This program determines if a certain character
 * is lowercase or not
 *
 * Return: 1 (Succes) 0 otherwise
 */
int _islower(int c)
{
	/*variable declaration*/
	int lower_bound;
	int upper_bound;

	/*variable initialization*/
	lower_bound = 97;
	upper_bound = 122;
	/*Check if passed character is lowercase*/
	if ((lower_bound - 1) < c && c < (upper_bound + 1))
		return (1);
	else
		return (0);
}
