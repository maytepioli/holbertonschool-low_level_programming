#include "main.h"

/**
 * print_alphabet - imprime el alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char abc = 'a';

	while (abc <= 'z')
	{
		_putchar(abc);
		abc++;

	}
	_putchar('\n');

}
