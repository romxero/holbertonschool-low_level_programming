#include "main.h"
/**
 * _puts_recursion - this is what the main function does
 * @s: variable
 * Return: this is what's supposed to be returned to main
 */


void _puts_recursion(char *s)

{


  if (*s == '\0')
    {
      return;
    }
  else
    {
      _putchar("%c", *s);
  _puts_recursion(s + 1);
    }



  _putchar('\n');




}
