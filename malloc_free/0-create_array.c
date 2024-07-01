#include "main.h"
#include <stdlib.h>
/**
 * create_array - funcion
 *@size: cantidad de memoria
 *@c: caracter especifico
 *Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *caden = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (caden == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size; a++)
	{
		caden[a] = c;
	}
	return (caden);
}
