#include <stdio.h>
/**
 * main - Single numbers with putchar
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
