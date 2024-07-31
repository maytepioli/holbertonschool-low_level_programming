#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_dnodeint - agregue un nuevo nodo al comienzo de un dlistint_t
 *@head: encabezado el primer node
 *@n: enetro
 *Return: new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodo = malloc(sizeof(dlistint_t));

	if (new_nodo == NULL)
	{
		return (NULL);
	}

	new_nodo->n = n;
	new_nodo->prev = NULL;
	new_nodo->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new_nodo;

	}
	*head = new_nodo;

	return (new_nodo);
}
