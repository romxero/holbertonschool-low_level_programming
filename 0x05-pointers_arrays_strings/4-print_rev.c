#include "main.h"
/**
 * print_rev - this is what the main function does
 * @s: variable
 * Return: this is what's supposed to be returned to main
 */

void print_rev(char *s)

{

	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s >= 0)
	{
		_putchar(*s--);
		if (*s == 0)
		{
			break;
		}
	}
	_putchar('\n');

}
