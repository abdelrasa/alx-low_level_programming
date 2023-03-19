#include <stdio.h>

/**
 * main - Alphabet in lowercase
 * followed by a new line
 * Return: Always (0)
 */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
