#include "main.h"
/**
 * _strlen_recursion - this is what the main function does
 * @s: variable
 * Return: this is what's supposed to be returned to main
 */


int _strlen_recursion(char *s)

{


	if (*s == '\0')
	{
	return (0);
	}


	return (1 + _strlen_recursion(s + 1));

}
