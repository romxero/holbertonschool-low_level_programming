#include "holberton.h"
#include "main.h"
/**
 * *_strpbrk - this is what the main function does
 * @s: variable
 * @accept: variable
 * Return: this is what's supposed to be returned to main
 */

char *_strpbrk(char *s, char *accept)


{

  int i;
  int j;

  for (i = 0; s[i] != '\0'; i++)
    {
      for (j = 0; accept[j] != '\0'; j++)
	if (s[i] == accept[j])
	  {
	    return (s + i);
	  }
    }

  return ('\0');


}
