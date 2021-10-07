#include "main.h"
/**
 * swap_int - this is what the main function does
 * @a: variable
 * @b: variable
 * Return: this is what's supposed to be returned to main
 */


void swap_int(int *a, int *b)

{

	int c;

	c = *a;
	*a = *b;
	*b = c;

}
