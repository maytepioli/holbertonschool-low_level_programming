#include "main.h"

/**
*cap_string - Capitalizar cada palabra del string
*Return: retorna el string
*@x: string ingresado
*/
char *cap_string(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[0] >= 'a' && x[0] <= 'z')
			x[0] -= 32;

		if (x[i] == ' ' || x[i] == '\n' || x[i] == '\t' || x[i] == '.')
			if (x[i + 1] >= 'a' && x[i + 1] <= 'z')
				x[i + 1] -= 32;
		i++;
	}

	return (x);
}
