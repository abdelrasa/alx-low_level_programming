#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints
 * @argc: number of arguments
 * @argv: array of vector
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *R;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	R = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", R[i]);
			break;
		}
		printf("%02hhx ", R[i]);
	}
	return (0);
}
