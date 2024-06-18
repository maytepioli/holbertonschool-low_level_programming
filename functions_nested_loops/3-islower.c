#include "main.h"

/**
 * _islower - retorna 1 si es minuscula, retorna 0 si es mayuscula
 * @c: caracter que verifica
 * Return: 0
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
