#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: pointer to first array index
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int i;
	unsigned int j;
	char value;
	int NEWLINE;

	NEWLINE = 10;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			value = *(*(a + i) + j);
			_putchar(value);
		}
		_putchar(NEWLINE);
	}
}
