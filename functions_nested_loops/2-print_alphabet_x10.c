#include "main.h"

/**
 * print_alphabet_x10- imprime el alfabeto
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char abc = 'a';
	int linea = 0;

	for (linea = 0; linea  <= 9; linea++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
	}
}
