#include <stddef.h>
#include "function_pointers.h"
/**
 *int_index - busque un n√∫mero enter
 *@array: array
 *@size: tama√o
 *@cmp: puntero a la funcion
 *Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int len;

	if (array == NULL || size <= 0)
	{
		return (-1);
	}

	for (len = 0; len < size; len++)
	{
		if (cmp(array[len]))
		{
			return (len);
		}
	}
	return (len);
}
