#include "main.h"
/**
 * _puts2 - this is what the main function does
 * @str: variable
 * Return: this is what's supposed to be returned to main
 */


void puts2(char *str)


{

	while (*str != '\0')
	{
		_putchar (*str+2);

	}
	_putchar('\n');

}
