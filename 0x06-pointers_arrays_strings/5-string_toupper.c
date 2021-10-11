#include "holberton.h"
#include "main.h"
/**
 * *string_toupper - this is what the main function does
 * @ch: variable
 * Return: this is what's supposed to be returned to main
 */


char *string_toupper(char *ch)

{


	int i = 0;

	while (ch[i] != '\n')
	{
		if (ch[i] >= 'a'  && ch[i] < 'z')
		{
			ch[i] -= 32;
		}

		i++;
	}

	return (ch);


}
