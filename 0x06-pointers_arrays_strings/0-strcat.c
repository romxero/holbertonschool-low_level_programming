#include "main.h"
/**
 * *_strcat - this is what the main function does
 * @dest: variable
 * @src: variable
 * Return: this is what's supposed to be returned to main
 */


char *_strcat(char *dest, char *src)


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
