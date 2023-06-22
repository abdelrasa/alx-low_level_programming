#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints strings
 * @separator: String to separate strings
 * @n: Number of strings to print
 * @...: Strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list args;

	i = n;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	while (i--)
		printf("%s%s", (str = va_arg(args, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(args);
}
