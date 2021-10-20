#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - this is what the main function does
 * @s1: variable
 * @s2: variable
 * Return: this is what's supposed to be returned to main
 */

char *str_concat(char *s1, char *s2)

{

	char *ch;
	int i;
	int j;
	int size1;
	int size2;

	if (s1 == NULL)
	{
		return (NULL);
	}

	if (s2 == NULL)
	{
		return (NULL);
	}

	size1 = strlen(s1);
	size2 = strlen(s2);

	ch = malloc((size1 + size2 + 1) * sizeof(char));

	if (ch == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size1; i++)
	{
		ch[i] = s1[i];
	}

	for (j = 0; j < size2; i++)
	{
		ch[i] = s2[j];
		j++;
	}
	return (ch);

}
