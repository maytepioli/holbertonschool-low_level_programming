#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - suma todos los parametros
 * @n: Parametros
 * Return: suma de los parametros
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list a;
	unsigned int b;
	unsigned int i;

	va_start(a, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		b = b + va_arg(a, const unsigned int);
	}
	va_end(a);
	return (b);
}
