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
	if (num % 2 == 0)
		i = num / 2;
	else
	{
		num++;
		i = (num - 1) / 2;
		
	}

	for (; i < num; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
