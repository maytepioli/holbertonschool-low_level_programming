#include <stdlib.h>
#include "lists.h"

/**
 *free_list - liberar la lista
 *@head: encabezado del node
 *Return: nada
 */
void free_list(list_t *head)
{
	list_t *aux;

	while (head != NULL)
	{
		aux = head;
		head = head->next;
		free(aux->str);
		free(aux);
	}

}
