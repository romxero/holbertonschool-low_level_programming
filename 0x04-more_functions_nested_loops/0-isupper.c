#include "main.h"
/**
 * _isupper - this is what the main function does
 * @c: variable
 * Return: this is what's supposed to be returned to main
 */

int _isupper(int c)


{
	if (c >= 'A' && c <= 'Z')
	{
	_putchar(c);
	return (1);
	}
	else
	{
	return (0);
	}

}
