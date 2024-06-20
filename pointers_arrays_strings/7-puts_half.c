#include "main.h"

/**
 *puts_half - imprimir
 *@str: strint
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		if (num > 4)

			_putchar(str[num]);
	}
		_putchar('\n');
}
