#include "main.h"
/**
 * print_last_digit- imprime el ultimo numero
 *@n: nos vrinda el numero
 * Return: 0
 */

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		/* tomar la version positiva de last */
		last = last * -1;

		_putchar(last + 48);
		return (last);
	}
	else
	{
		_putchar(last + 48);
		return (last);
	}

}
