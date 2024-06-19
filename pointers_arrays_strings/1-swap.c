#include <stdio.h>

/**
 *swap_int - intercambie los valores de dos números enter
 *@a: es un entero
 *@b: es un entero
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
