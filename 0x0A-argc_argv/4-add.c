#include <stdio.h>
#include <stdlib.h>
/**
 * main - this is what the main function does
 * @argc: variable
 * @argv: variable
 * Return: this is what's supposed to be returned to main
 */


int main(int argc, char *argv[])

{

	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
	  sum += atoi(argv[i]);
	}

		printf("%d\n", sum);

	return (0);


}
