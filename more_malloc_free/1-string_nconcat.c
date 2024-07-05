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

	unsigned int len1, len2, copi1, lentotal, copi2;
	char *concat;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{}
	if (n < len2)
	{
		len2 = n;
	}
	lentotal = len1 + len2;
	concat = (char *)malloc((lentotal + 1) * sizeof(char));

	if (concat == NULL)
	{
		return (NULL);
	}
	for (copi1 = 0; s1[copi1] != '\0'; copi1++)
	{
		concat[copi1] = s1[copi1];
	}
	for (copi2 = 0; copi2 < len2; copi2++)
	{
		concat[copi1 + copi2] = s2[copi2];
	}
	concat[copi1 + copi2] = '\0';

	return (concat);
}
