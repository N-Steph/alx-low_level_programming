#include <stdio.h>
#include <stdlib.h>

/**
 * main - print number of coins
 * @argc: argument count
 * @argv: array of string passed to main
 *
 * This programm prints the mininum number of coins
 * to make change fo an amount of money.
 *
 * Return: 0 (Success), 1 (failure)
 */
int main(int argc, char *argv[])
{
	int coin_value[] = {25, 10, 5, 2, 1};
	int coins;
	int cent;
	int result;
	int i;
	int size_of_cv;

	coins = 0;
	if (argc == 2)
	{
		cent = atoi(argv[1]);
		if (cent < 0)
		{
			printf("0\n");
			return (0);
		}
		size_of_cv = sizeof(coin_value) / sizeof(int);
		for (i = 0; i < size_of_cv; i++)
		{
			result = cent / coin_value[i];
			if (result >= 1)
			{
				coins += result;
				cent -= result * coin_value[i];
			}
			if (cent == 0)
				break;
		}
		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
