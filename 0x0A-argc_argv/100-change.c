#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int i;
	int cents, money = 0;
	int money_values[] = {25, 10, 5, 2, 1};
	int num_money = sizeof(money_values) / sizeof(money_values[0]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num_money; i++)
	{
		money += cents / money_values[i];
		cents %= money_values[i];
	}

	printf("%d\n", money);
	return (0);
}
