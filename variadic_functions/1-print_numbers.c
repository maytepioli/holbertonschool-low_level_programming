#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - imprime numeros
 * @separator: es lo que se imprime entre los num, (, )
 * @n: son los numeros
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list a;
	unsigned int b;

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(a, unsigned int));
		if (b < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}
