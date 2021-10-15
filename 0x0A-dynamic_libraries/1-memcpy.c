#include "holberton.h"
#include "main.h"
/**
 * *_memcpy - this is what the main function does
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: this is what's supposed to be returned to main
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
  unsigned int i;

  for (i = 0; i < n; i++)
    {
      dest[i] = src[i];
    }

  return (dest);

}
