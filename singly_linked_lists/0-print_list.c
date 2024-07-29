#include <stdio.h>
#include "lists.h"

/**
 * print_list - imprime todos los elementos de una lista
 *@h: puntero a list_t, h apunta al primer node de la lista enlazada
 * Return: contador , la cantidad de nodes
 */
size_t print_list(const list_t *h)
{
	int contador = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%i]%s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		contador++;
	}
	return(contador);
}
