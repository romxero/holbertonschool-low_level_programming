#include <stdio.h>
/**
 * main - this is what the main function does
 * @argc: variable
 * @argv: variable
 * Return: this is what's supposed to be returned to main
 */


int main(int argc, char *argv[] __attribute__((unused)))

{

	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);


}
