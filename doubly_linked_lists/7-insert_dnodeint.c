#include <stdlib.h>
#include "lists.h"
/**
 *insert_dnodeint_at_index - Inserta un nuevo nodo
 *@h: direccion del primer nodo en la lista
 *@idx: índice en el que se debe insertar el nuevo nodo
 *@n: El valor para el nuevo nodo
 *Return: nuevo nodo
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *r = *h;
	unsigned int i;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	for (i = 0; i < idx - 1 && r != NULL; i++)
	{
		r = r->next;
	}

	if (r == NULL)
	{
		return (NULL);
	}

	new_node->next = r->next;
	new_node->prev = r;

	if (r != NULL)
	{
		r->next->prev = new_node;
	}
	r->next = new_node;


	return (new_node);
}
