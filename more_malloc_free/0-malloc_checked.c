#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - Asigna memoria usando malloc
 *@b: Cantidad de bytes a asignar
 *Devuelve un puntero al bloque de memoria asignado.
 *Si malloc falla, termina el proceso con un valor de estado de 98
 *Return: 0
 */
void *malloc_checked(unsigned int b)
{

	void *checked = malloc(b);

	if (checked == NULL)
	{
		exit(98);
	}
	return (checked);
}
