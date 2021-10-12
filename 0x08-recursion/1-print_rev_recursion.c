#include "main.h"
/**
 * _print_rev_recursion - this is what the main function does
 * @s: variable
 * Return: this is what's supposed to be returned to main
 */

void _print_rev_recursion(char *s)


{



	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);



}
