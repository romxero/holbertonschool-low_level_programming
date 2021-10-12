#include "holberton.h"
#include "main.h"
/**
 * print_chessboard - this is what the main function does
 * @a: variable
 * Return: this is what's supposed to be returned to main
 */


void print_chessboard(char (*a)[8])

{

	int rows = 8;
	int const columns = 8;
	int i;
	int j;


	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}


}
