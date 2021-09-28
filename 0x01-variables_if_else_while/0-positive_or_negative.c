#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 0)
	{
	printf("%d is positive\n", n);
}

	else if (n == 0)
	{
	printf("%d is zero\n", n);
}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
}

	return (0);
}
