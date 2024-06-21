#include "main.h"

/**
 * rev_string - de vuelta la cadena
 *@s: strint
 * Return: Always 0
 */
void rev_string(char *s)
{
	int largo;
	int aux;
	char a;

	for (largo = 0; s[largo] != '\0'; largo++)
	{
	}
	for (aux = 0; aux < largo / 2; aux++)
	{
		a = s[aux];
		s[aux] = s[largo - aux - 1];
		s[largo - aux - 1] = a;
	}

}
