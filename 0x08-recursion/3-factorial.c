#include "main.h"
/**
 * factorial - this is what the main function does
 * @n: variable
 * Return: this is what's supposed to be returned to main
 */

int factorial(int n)


{

	if (n < 0)
	{
	return (-1);
	}

	if (n == 0)
	{
	return (1);
	}
	return (n * factorial(n - 1));


}
