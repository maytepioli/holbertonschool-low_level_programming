#include "main.h"

/**
 * _print_rev_recursion - imprimir una cadena alreves con recursion
 * @s: string
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
