#include "main.h"

/**
 * _strcat - Escribe una función que concatene dos cadenas
 *@dest: cadena 1
 *@src: cadena 2
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	dest[a + b] = '\0';
	return (dest);
}
