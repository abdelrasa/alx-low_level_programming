#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: factorial repeater
 *
 * Return: factorial n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	else
		return (n + factorial(n - 1));
}
