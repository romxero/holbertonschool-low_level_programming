#include "main.h"
/**
 * int _sqrt_recursion - this is what the main function does
 * @i: variable
 * @j: variable
 * Return: this is what's supposed to be returned to main
 */

int square_root(int i, int j)

{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (square_root(i + 1, j));
	}
}

int _sqrt_recursion(int n)
{
	int a = 1;

	return (square_root(a, n));
}

int main(void)
{
	int r;

	r = _sqrt_recursion(25);
	printf("%d\n", r);
	return (0);
}
