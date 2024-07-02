#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenar 2 cadenas
 *
 *@s1: cadena 1
 *@s2: cadena 2
 *Return: 0
 */
char *str_concat(char *s1, char *s2)
{
	int a;
	int b;
	char *result;
	int copy;
	int cat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s1 = "";
	}
	for (a = 0; a[s1] != '\0'; a++)
	{
	}
	for (b = 0; b[s2] != '\0'; b++)
	{

	}
	result = malloc((a + b + 1) * sizeof(char));
	if (result == 0)
	{
		return (NULL);
	}

	for (copy = 0; copy < a; copy++)
	{
		result[copy] = s1[copy];
	}
	for (cat = 0; cat < b; cat++)
	{
		result[a + cat] = s2[cat];
	}
	result[a + b] = '\0';

	return (result);
}
