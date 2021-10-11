#include "holberton.h"
#include "main.h"
/**
 * _strcmp - this is what the main function does
 * @s1: variable
 * @s2: variable
 * Return: this is what's supposed to be returned to main
 */


int _strcmp(char *s1, char *s2)

{

	int a;

	a = 0;

	while ((s1[a] == s2[a]) && (s1[a] != '\0' && s2[a] != '\0'))
	{
		a++;
	}

	return (*s1 - *s2);


}
