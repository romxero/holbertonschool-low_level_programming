#include "holberton.h"
#include "main.h"
/**
 * *cap_string - this is what the main function does
 * @ch: variable
 * Return: this is what's supposed to be returned to main
 */

char *cap_string(char ch)

{

	int a;

	a = 0;

	while ((s1[a] == s2[a]) && (s1[a] != '\0' && s2[a] != '\0'))
	{
		a++;
	}

	return (*s1 - *s2);


}
