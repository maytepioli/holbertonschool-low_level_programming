#include <stdlib.h>
#include "lists.h"

/**
 *free_dlistint - libera la lista
 *@head: puntero a la cabeza de la lista
 *Return: nada
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	free_dlistint(head->next);
	free(head);

}
