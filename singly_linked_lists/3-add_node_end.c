#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
int _strlen(const char *s);
/**
 *add_node_end - agrega un nuevo node al final de la lista
 *@head: encabezado del primer node
 *@str: cadena
 *Return: retorna la nueva caden
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *ultimo_node;
	size_t len;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	len = _strlen(str);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		ultimo_node = *head;
		while (ultimo_node->next != NULL)
		{
			ultimo_node = ultimo_node->next;
		}
		ultimo_node->next = new_node;
	}
	return (new_node);
}
/**
 *_strlen - la funcion que cuenta los caracteres
 *@s: string
 * Return: 0.
 */
int _strlen(const char *s)
{

	int len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	return (len);
}
