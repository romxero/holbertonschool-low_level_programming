#include <stdio.h>
/**
 * main - this is what the main function does
 *
 * Return: this is what's supposed to be returned to main
 */

int main(void)

{
char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar (c);

	for (c = 'A'; c <= 'Z'; c++)
	putchar (c);

	putchar ('\n');

	return (0);
}
