#include <stdio.h>

/**
 * main - Abecedario
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char abecedario = 'a';
	int numero = '0';

	while (numero <= '9')
	{
		putchar(numero);
		numero++;
	}
	while (abecedario <= 'f')
	{
		putchar(abecedario);
		abecedario++;
	}

	putchar('\n');
	return (0);
}
