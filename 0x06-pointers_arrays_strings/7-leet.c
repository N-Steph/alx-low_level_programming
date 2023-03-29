#include "main.h"

/**
 * leet - encode a string into 1337
 * @s: pointer to first character of string.
 *
 * Return: s of encoded string
 */
char *leet(char *s)
{
	char encode_letter[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encoding_number[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char *ptrs;
	int i;

	ptrs = s;
	for (i = 0; i < 10; i++)
	{
		while (*ptrs != '\0')
		{
			if (*ptrs == encode_letter[i])
				*ptrs = encoding_number[i];
			ptrs += 1;
		}
		ptrs = s;
	}
	return (s);
}
