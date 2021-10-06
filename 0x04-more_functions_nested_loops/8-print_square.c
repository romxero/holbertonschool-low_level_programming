#include "main.h"
/**
 * print_square - this is what the main function does
 * @size: variable
 * Return: this is what's supposed to be returned to main
 */

void print_square(int size)

{
	int x;
	int y;

	if (size <= 0)
	{
	_putchar('\n');
	}
	for (x = 0; x < size; x++)
	{
	for (y = 0; y < size; y++)
	{
	_putchar('#');
	}
	_putchar('#');
	_putchar('\n');
	}

}
