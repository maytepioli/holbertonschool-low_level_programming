#include <stdio.h>
#include "lists.h"
/**
 *print_dlistint - mprima todos los elementos de un dlistint_t lista
 *@h: direccion que apunta al primer nodo de la lista
 *Return: contador
 */
size_t print_dlistint(const dlistint_t *h)
{
	int contador = 0;

	while (h != NULL)
	{
		if (h != NULL)
		{
			printf("%i\n", h->n);
			h = h->next;
			contador++;
		}
	}
	return (contador);
}
