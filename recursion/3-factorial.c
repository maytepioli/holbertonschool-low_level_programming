#include "main.h"

/**
 * factorial - devuelve el factorial de un número da
 *@n: numero
 * Return: Always 0.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	else if (n < 0)

		return (-1);

	return (n * factorial(n - 1));

}
