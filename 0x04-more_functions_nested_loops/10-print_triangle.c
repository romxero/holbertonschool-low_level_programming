#include "main.h"
/**
 * print_triangle - this is what the main function does
 * @size: variable
 */


void print_triangle(int size)


{
	int x;
	int y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < x; y++)
	{
		_putchar(' ');
	}
	_putchar('#');
	_putchar('\n');
	}

}
