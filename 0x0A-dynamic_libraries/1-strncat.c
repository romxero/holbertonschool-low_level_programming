#include "holberton.h"
#include "main.h"
/**
 * *_strncat - this is what the main function does
 * @dest: variable
 * @src: variable
 * @n: variable
 * Return: this is what's supposed to be returned to main
 */


char *_strncat(char *dest, char *src, int n)


{
  int a = 0;
  int b = 0;

  while (dest[a] != '\0')
    a++;

  while (src[b] != '\0' && b < n)
    {
      dest[a] = src[b];
      a++;
      b++;
    }
  return (dest);


}
