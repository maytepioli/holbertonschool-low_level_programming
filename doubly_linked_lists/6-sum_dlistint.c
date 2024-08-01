#include <stdlib.h>
#include "lists.h"
/**
 *sum_dlistint - suma los n de los nodos
 *@head: puntero al puntero del primer nodo en la lista
 *Return: la suma de los nodos
 */
int sum_dlistint(dlistint_t *head)
{

	int suma = 0;
	dlistint_t *r = head;

	while (r != NULL)
	{
		suma += r->n;
		r = r->next;
	}
	return (suma);

}
