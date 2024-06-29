#include <stdio.h>
/**
 * main - main
 *@argc:Esel número de argumentos pasados al programa desdlalínede com
 *@argv: generalmente contiene el nombre del programa ejecutable.
 *Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
