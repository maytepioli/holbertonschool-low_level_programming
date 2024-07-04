#include "main.h"
#include <stdlib.h>

/**
 *free_grid - libere una cuadrícula bidimensional creada previament
 *@grid: strin bidimensional creada en el ejercicio 3
 *@height: alto de la cuadricula
 *Return: 0
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL)
	{
		return;
	}

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
