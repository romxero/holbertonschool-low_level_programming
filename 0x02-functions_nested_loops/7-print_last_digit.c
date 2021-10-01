#include "main.h"
/**
 * print_last_digit - this is what the main function does
 * @x: variable
 * Return: this is what's supposed to be returned to main
 */



int print_last_digit(int x)
{
	x = x % 10;
	if (x < 0)
	{
	x = x * -1;
	_putchar (x);
	return (x);
	}
	else
	{
	_putchar (x);
	return (x);
	}
}
