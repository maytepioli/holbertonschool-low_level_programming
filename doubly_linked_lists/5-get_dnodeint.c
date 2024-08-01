#include <stdlib.h>
#include "lists.h"
/**
 *get_dnodeint_at_index - devuelva el enésimo nodo de un dlistint
 *@head: puntero al puntero del primer nodo en la lista
 *@index: pocision del ensimo nodo
 *Return: el nodo en el la posicion index o NULL si esta vaciO
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *r = head;

	while (r != NULL)
	{
		if (i == index)
			return (r);
		r = r->next;
		i++;
	}

	return (NULL);


}
