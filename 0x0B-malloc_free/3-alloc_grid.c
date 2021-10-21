#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - this is what the main function does
 * @width: variable
 * @height: variable
 * Return: this is what's supposed to be returned to main
 */


int **alloc_grid(int width, int height)

{

	int i, j;

	int **arr = (int **)malloc(height * sizeof(int *));

	for (i = 0; i < height; i++)
	arr[i] = (int *)malloc(width * sizeof(int));



	for (i = 0; i < height; i++)
	for (j = 0; j < width; j++)
	arr[i][j] = 0;

    /* https://www.geeksforgeeks.org/dynamically-allocate-2d-array-c */


	return (arr);
}
