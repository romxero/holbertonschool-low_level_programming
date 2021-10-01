#include <stdio.h>
/**
 * print_sign - this is what the main function does
 * @n: variable
 * Return: this is what's supposed to be returned to main
 */


int print_sign(int n)


{
	if (n > 0)
	{
	return (1);
	printf("+");
	}
	else if (n == 0)
	{
	return (0);
	printf("0");
	};
	else
	{
	return (-1);
	printf("-");
	}

}
