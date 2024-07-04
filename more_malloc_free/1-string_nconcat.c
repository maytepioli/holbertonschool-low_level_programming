#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - unción que concatene dos cadena
 *@s1: primer cadena
 *@s2: segunnda cadena
 *@n: numero maximo de bytes a concatenar en s2
 *Return: concat
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	size_t len1, len2, concat_size;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n < len2)
	{
		len2 = n;
	}

	concat_size = len1 + n + 1;

	concat = malloc(concat_size * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strncat(concat + len1, s2, len2);
	concat[concat_size - 1] = '\0';

	return (concat);
}
