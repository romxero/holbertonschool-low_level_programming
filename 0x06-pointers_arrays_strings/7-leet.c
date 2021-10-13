#include "holberton.h"
#include "main.h"
/**
 * *leet - this is what the main function does
 * @ch: variable
 * Return: this is what's supposed to be returned to main
 */

char *leet(char ch)

{

  int i, j;
  char sep[] = " \t\n,;.!?\"(){}"; /* word seperators */

  i = 1;
  if (s[0] >= 'a' && s[0] <= 'z')
    s[0] -= ('a' - 'A'); /* changes first letter of word */
  while (s[i] != '\0')
    {
      for (j = 0; sep[j] != '\0'; j++)
	if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z')) /**
                                                                 * checks if element before is word seperator
                                                                 */
	  s[i] -= ('a' - 'A'); /* capiatilzes if after seperator */
      i++;
    }
  return (s);


}
