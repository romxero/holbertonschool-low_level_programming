#include "holberton.h"
#include "main.h"
/**
 * *_strchr - this is what the main function does
 * @s: variable
 * @c: variable
 * Return: this is what's supposed to be returned to main
 */



char *_strchr(char *s, char c)

{

	while (*s != c)
	{
		s++;
	}

	return (s);

}
