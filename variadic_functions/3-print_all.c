#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 *
 *
 */
void print_last(const char * const format, int i)
{
	if (format[i + 1] == '\0')
	{
		printf(", ");
	}
}
/**
 *
 *
 */
void print_all(const char * const format, ...)
{
	va_list argu;
	int i = 0;
	char *a;

	va_start(argu, format);

	while (format != NULL && forma[i] != '\0')
	{
		i++;
			switch(format[i])
			{
				case 'c':
					printf("%c", va_arg(argu int));
					print_last(format, i);
					break;
				case 'i'
					printf("%d", va_arg(argu int));
					print_last(format, i);
					break;
				case 'f'
					printf("%f", va_arg(argu double));
					print_last(format,i);
					break;
				case 's'
					a = va_arg(argu, char *);

				if (*a == NULL)
				{
					printf("(nill)");
					print_last(format, i);
					break;
				}
				printf("%s", a);
				print_last(format, i);
				break;
			}
			i++;
			va_end(argu);
	}

}
