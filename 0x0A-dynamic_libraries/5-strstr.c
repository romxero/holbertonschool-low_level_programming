#include "holberton.h"
#include "main.h"
/**
 * *_strstr - this is what the main function does
 * @haystack: variable
 * @needle: variable
 * Return: this is what's supposed to be returned to main
 */

char *_strstr(char *haystack, char *needle)

{

  int i;
  int j = 0;

  for (i = 0; haystack[i] != '\0'; i++)
    {

      if (haystack[i] == needle[j])
	{
	  return (haystack + i);
	}
    }

  return ('\0');

}
