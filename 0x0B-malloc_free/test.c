#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int count_characters(char *str)
{
	int num_character;
	char *ptr1;
	char *ptr2;
	char *new_ptr;
	int len;

	len = strlen(str);
	ptr1 = malloc(sizeof(char) * (len + 1));
	if (ptr1 == 0)
		return (0);
	strcpy(ptr1, str);
	num_character= 0;
	ptr2 = ptr1;
	while (*ptr1 != '\0')
	{
		if ((*ptr1 >= 33 && *ptr1 <= 126))
		{
			while (*ptr2 >= 33 && *ptr2 <= 126)
			{
				num_character += 1;
				if (*ptr2 == 32)
					break;
				ptr2++;
			}
			return (num_character);
		}
		ptr1++;
		ptr2 = ptr1;
	}
}

int main(void)
{
	char *text = "    I   am the boss";
	int *ptr;
	int characters;

	characters = count_characters(text);
	printf("%d\n", characters);
	return (0);
}
