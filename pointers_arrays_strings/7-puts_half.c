#include "main.h"

/**
 *puts_half - imprimir
 *@str: strint
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int num;
	int i;

	for (num = 0; str[num] != '\0'; num++)
	{
		
	}

	i = num / 2;

	for (i = i - 1; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
