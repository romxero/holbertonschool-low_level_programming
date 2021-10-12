#include "holberton.h"
#include "main.h"
/**
 * _strspn - this is what the main function does
 * @s: variable
 * @accept: variable
 * Return: this is what's supposed to be returned to main
 */



unsigned int _strspn(char *s, char *accept)

{

	int i;
	int j;
	int l = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		if (s[i] == s[j])
		{
			l++;
		}
	}


	return (l);


}
