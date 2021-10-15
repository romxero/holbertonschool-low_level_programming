#include "main.h"
/**
 * _strlen - this is what the main function does
 * @s: variable
 * Return: this is what's supposed to be returned to main
 */

int _strlen(char *s)


{

  int i = 0;

  while (*s != '\0')
    {
      s++;
      i++;
    }

  return (i);
}
