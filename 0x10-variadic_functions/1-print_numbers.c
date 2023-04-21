#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string
 * @n: number of argmnt
 * @...: variable numbers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i;
	va_list list;

	i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	while (i--)
		printf("%d%s", va_arg(list, int),
				i ? (separator ? separator : "") : "\n");
	va_end(list);
}
