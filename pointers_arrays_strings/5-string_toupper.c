#include "main.h"

/**
 * string_toupper - pasar a mayuscula
 *@a: cadena
 * Return: Always 0.
 */
char *string_toupper(char *a)
{
	int len;

	for (len = 0; a[len] != '\0'; len++)
	{
		if (a[len] >= 'a' && a[len] <= 'z')

		a[len] ^= 32;
	}
	return (a);
}
