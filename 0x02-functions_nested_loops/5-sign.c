#include "main.h"
/**
 * print_sign - this is what the main function does
 * @n: variable
 * Return: this is what's supposed to be returned to main
 */


int print_sign(int n)


{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	else
	{
	_putchar('_');
	return (-1);
	}

}
