#include "main.h"

/**
 * print_rev - imprimir alreves
 *@s: sprint
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int inicial;
	int fin;

	for (inicial = 0; s[inicial] != '\0'; inicial++)
	{
	}

		for (fin = inicial - 1; fin >= '\0'; fin--)
		{
			_putchar(s[fin]);
		}
		_putchar('\n');
}
