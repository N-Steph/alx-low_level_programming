#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: checked character
 *
 * This program checks if a given character passed
 * is an alphabetic character or not.
 *
 * Return: 1 (Success), 0 otherwise
 */
int _isalpha(int c)
{
	/*variables declaration*/
	int lb_upcase;
	int up_upcase;
	int lb_locase;
	int up_locase;

	/*variables initialization*/
	lb_upcase = 65;
	up_upcase = 90;
	lb_locase = 97;
	up_locase = 122;
	/*check if character passed in alphabetic*/
	if ((lb_upcase <= c && c <= up_upcase) || (lb_locase <= c && c <= up_locase))
		return (1);
	else
		return (0);
}
