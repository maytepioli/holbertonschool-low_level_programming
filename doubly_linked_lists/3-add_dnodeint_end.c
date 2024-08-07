#include <stdlib.h>
#include "lists.h"
/**
 *add_dnodeint_end - agrega un nuevo nodo al final de una lista dlistint_t
 *@head: doble puntero a la cabeza de la lista
 *@n: valor a agregar en el nuevo nodo
 * Return: dirección del nuevo elemento, o NULL si fall
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo = malloc(sizeof(dlistint_t));
	dlistint_t *ultimo = *head;

	if (new_nodo == NULL)
	{

		return (NULL);
	}

	new_nodo->n = n;
	new_nodo->next = NULL;


	if (*head == NULL)
	{
		new_nodo->prev = NULL;
		*head = new_nodo;
		return (new_nodo);
	}

	while (ultimo->next != NULL)
	{
		ultimo = ultimo->next;
	}

	ultimo->next = new_nodo;
	new_nodo->prev = ultimo;

	return (new_nodo);

}
