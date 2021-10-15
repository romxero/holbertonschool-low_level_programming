#include "holberton.h"
#include "main.h"
/**
 * *_memset - this is what the main function does
 * @s: variable
 * @b: variable
 * @n: variable
 * Return: this is what's supposed to be returned to main
 */

char *_memset(char *s, char b, unsigned int n)

{

  unsigned int i;

  for (i = 0; i < n; i++)
    {
      s[i] = b;
    }


  return (s);


}
