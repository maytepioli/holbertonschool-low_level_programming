#include "main.h"

/**
 * reverse_array - funcion alreves
 * @a:cadena
 * @n: caracteres
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int cambio;
	int aux = 0;

	for (; aux < n / 2; aux++)
	{
		cambio = a[aux];
		a[aux] = a[n - aux - 1];
		a[n - aux - 1] = cambio;
	}

}
