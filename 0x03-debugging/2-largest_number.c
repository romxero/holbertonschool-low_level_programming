#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		printf("largest = a");
	}
	else if (b > a && b > c)
	{
		printf("largest = b");
	}
	else
	{
		printf("largest = c");
	}

	return (0);
}