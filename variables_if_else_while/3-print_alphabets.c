#include <stdio.h>

/**
 * main - Abecedario
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	char abecedario = 'a';
	char ABECEDARIO = 'A';

	while (abecedario <= 'z')
	{
		putchar(abecedario);
		abecedario++;
	}
	while (ABECEDARIO <= 'Z')
	{
		putchar(ABECEDARIO);
		ABECEDARIO++;
	}

	putchar('\n');
	return (0);
}
