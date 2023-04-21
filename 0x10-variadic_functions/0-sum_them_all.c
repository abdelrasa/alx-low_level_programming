#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number
 * @...: numbers calculate
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list smm;
	int j = 0, i = n;

	if (!n)
		return (0);
	va_start(smm, n);
	while (i--)
		j += va_arg(smm, int);

	va_end(smm);
	return (j);
}
