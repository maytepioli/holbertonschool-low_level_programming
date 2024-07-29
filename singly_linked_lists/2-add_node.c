#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 *add_node - agregue un nuevo nodo al comienzo de un list_t lista
 *@head: encabezado el primer node
 *@str: cadena
 *Return: la direccion del nuevo node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	new_node->str = strdup(str);
	new_node->len = len;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

#include "lists.h"

/**
 *_strlen - la funcion que cuenta los caracteres
 *@s: string
 * Return: 0.
 */
int _strlen(char *s)
{

	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	return (len);
}
