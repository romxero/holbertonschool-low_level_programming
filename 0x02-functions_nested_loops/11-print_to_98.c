#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - this is what the main function does
 * @n: variable
 * Return: this is what's supposed to be returned to main
 */

void print_to_98(int n)

{
	if (n < 98)
	{
	while (n < 98)
	{

	printf("%d, ", n);
	n++;
	}
	}
	else if (n > 98)
	{
	while (n > 98)
	{

	printf("%d, ", n);
	n--;

	}
	}
	else
	{
	printf(n);
	}

}
