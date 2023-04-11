#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the minimum number of coins to
 *        make change for an amount of money.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int money = atoi(argv[1]), cent = 0;
	int v[] = {25, 10, 5, 2, 1};

	if (argc != 2)
		{
			printf("Error\n");
			return (1);
		}

	for (int i = 0; i < 5; i++)
	{
		cent = money / v[i];
		money = money % v[i];
		if (money % v[i] == 0)
			{
				break;
			}
	}

	printf("%d\n", cent);

	return (0);
}
