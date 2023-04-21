#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings, followed by a new line
 * @separator: srting
 * @n: number string print
 * @...: variables
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	int i;
	char *str;
	va_list list;

	i = n;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	while (i--)
		printf("%s%s", (str = va_arg(list, char *)) ? str : "(nil)",
				i ? (separator ? separator : "") : "\n");
	va_end(list);
}
