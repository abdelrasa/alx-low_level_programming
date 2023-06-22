#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line
 * @separator: String to separate numbers
 * @n: Number of arguments
 * @...: Integers to print_numbers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list args;

	i = n;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	while (i--)
		printf("%d%s", va_arg(args, int),
				i ? (separator ? separator : "") : "\n");
	va_end(args);
}
