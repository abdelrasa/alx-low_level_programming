#include <stdio.h>
/**
 * main - Smile in the mirror
 *
 * Return: always 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
