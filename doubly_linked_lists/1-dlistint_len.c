#include "lists.h"
#include <stddef.h>

/**
 *dlistint_len - devuelve el número de elementos en un enlac
 *@h: puntero a list_t, h apunta al primer node de la lista enlazada
 *Return: contador
 */
size_t dlistint_len(const dlistint_t *h)
{
	int contador = 0;

	while (h != NULL)
	{
		h = h->next;
		contador++;
	}
	return (contador);

}
