#include "main.h"
/**
 * _puts - this is what the main function does
 * @str: variable
 * Return: this is what's supposed to be returned to main
 */


void _puts(char *str)

{

	while (*str != '\0')
	{
		_putchar (*str++);

	}
	_putchar('\n');

}
