#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - this is what the main function does
 * @str: variable
 * Return: this is what's supposed to be returned to main
 */

char *_strdup(char *str)

{

	char *ch;
	int x;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = strlen(str);

	ch = malloc((size + 1) * sizeof(char));


	if (ch == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < size; x++)
	{
		ch[x] = str[x];
	}


	return (ch);

}
