#include <stddef.h>
#include "function_pointers.h"
/**
 *array_iterator - ejecute una funcion
 *@array: array
 *@size: tama√o
 *@action: puntero
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t len;

	for (len = 0; len < size; len++)
	{
		action(array[len]);
	}
}
