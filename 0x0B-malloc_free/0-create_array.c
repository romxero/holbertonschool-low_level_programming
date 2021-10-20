#include "main.h"
#include <stdlib.h>

/**
 * create_array - this is what the main function does
 * @c: variable
 * @size: variable
 * Return: this is what's supposed to be returned to main
 */

char *create_array(unsigned int size, char c)

{

	char *ch;
	unsigned int x;

	ch = malloc(size * sizeof(char));

	if (ch == NULL || c == 0)
	{
		return ('\0');
	}
	for (x = 0; x < size; x++)
	{
		ch[x] = c;
	}


	return (ch);

}
