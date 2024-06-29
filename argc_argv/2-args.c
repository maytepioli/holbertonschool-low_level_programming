#include <stdio.h>
/**
 * main - main
 *@argc:Esel número de argumentos pasados al programa desdlalínede coman
 *@argv: generalmente contiene el nombre del programa ejecutable.
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int l;

	for (l = 0; l < argc; l++)
	{
	printf("%s\n", argv[l]);
	}

	return (0);
}
