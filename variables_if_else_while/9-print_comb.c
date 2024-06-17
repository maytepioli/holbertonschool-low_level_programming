#include <stdio.h>

/**
 * main - combi
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int num = '0';
	int coma = ',';
	int espacio = ' ';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{	putchar(coma);
			putchar(espacio);
		}
		num++;
	}
		putchar('\n');
return (0);
}
