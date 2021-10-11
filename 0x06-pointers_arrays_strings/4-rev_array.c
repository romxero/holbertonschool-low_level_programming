#include "holberton.h"
#include "main.h"
/**
 * reverse_array - this is what the main function does
 * @a: variable
 * @n: variable
 * Return: this is what's supposed to be returned to main
 */

void reverse_array(int *a, int n)


{

	int first = 0;
	int last n - 1;
	int tmp = 0;

	while (first < last)
	{
		tmp = a[first];
		a[first] = a[last];
		a[last] = tmp;
		first++;
		last--;
	}



	    
}
