#include "main.h"

/**
 * _pow_recursion - Escribe una funcion que devuelve elvado y
 *@y: es el valor al cual va a ser elevado
 *@x: es el el valor que va a ser elevado
 * Return: Always 0.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else
		return (x * _pow_recursion(x, y - 1));
}
