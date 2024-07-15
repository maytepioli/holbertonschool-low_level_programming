#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - imprime la cadena
 * @separator: los separadores (, )
 * @n: numero de cadenas
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		const char *c = va_arg(a, const char *);

		if (c == NULL)
			printf("(nil)");
		else
			printf("%s", c);

		if (b < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(a);

	printf("\n");
}
