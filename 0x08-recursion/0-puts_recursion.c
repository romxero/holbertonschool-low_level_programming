#include "main.h"
/**
 * _puts_recursion - this is what the main function does
 * @s: variable
 * Return: this is what's supposed to be returned to main
 */


void _puts_recursion(char *s)

{


	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);




}
