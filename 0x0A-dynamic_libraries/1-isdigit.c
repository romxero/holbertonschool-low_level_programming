#include "main.h"
/**
 * _isdigit - this is what the main function does
 * @c: variable
 * Return: this is what's supposed to be returned to main
 */


int _isdigit(int c)

{
  if (c >= '0' && c <= '9')
    {
      return (1);
    }
  else
    {
      return (0);
    }

}
