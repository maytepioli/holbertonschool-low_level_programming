#include "main.h"

/**
 * _strlen_recursion - devuelve la longitud de una cadena.
 * @s: la cadena a medir.
 *
 * Return: la longitud de la cadena.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
