#include  <stddef.h>
#include "lists.h"
/**
 *list_len -devuelve el número de elementos en un enlace
 *@h: puntero a list_t, h apunta al primer node de la lista enlazada
 *Return: contador , la cantidad de nodes
 */
size_t list_len(const list_t *h)
{
	int contador = 0;

	while (h != NULL)
	{
		h = h->next;
		contador++;
	}
	return (contador);
}
