#include <stdio.h>
#include <stdlib.h>
/**
 * main - indica el inicio
 * @argc: argc
 * @argv: argv
 * Return: 0
 *
 */
int main(int argc, char **argv)
{
	if (argc != 0)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
