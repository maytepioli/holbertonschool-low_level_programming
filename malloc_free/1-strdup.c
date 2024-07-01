#include "main.h"
#include  <stdlib.h>
/**
 * _strdup - e contiene una copia de la cadena dada como parámetro
 *
 *@str: str
 *Return: 0
 */
char *_strdup(char *str)
{
	int len;
	char *copy;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	for (len = 0; len[str] != '\0'; len++)
	{
	}

	copy = malloc(len + 1 * sizeof(char));

	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}
	i++;
	copy[i] = '\0';

	return (copy);

}
