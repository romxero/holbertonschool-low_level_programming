#include "main.h"
#include <stdlib.h>

/**
 * free_grid - this is what the main function does
 * @grid: variable
 * @height: variable
 * Return: this is what's supposed to be returned to main
 */


void free_grid(int **grid, int height)


{

	int i;

	for (i = 0; i < height; i++)
	free(grid[i]);


	free(grid);



}
