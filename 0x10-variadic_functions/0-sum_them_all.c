#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number
 * @...: numbers calculate
 *
 * Return: the integer sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list sm;
	int j = 0, i = n;

	if (!n)
		return (0);
	va_start(sm, n);
	while (i--)
		j += va_arg(sm, int);

	va_end(sm);
	return (j);
}
