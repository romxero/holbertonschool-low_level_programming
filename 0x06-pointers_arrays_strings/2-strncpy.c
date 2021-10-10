#include "holberton.h"
#include "main.h"
/**
 * *_strncpy - this is what the main function does
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: this is what's supposed to be returned to main
 */


char *_strncpy(char *dest, char *src, int n)

{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	return (dest);


}
